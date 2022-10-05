install.packages("nycflights13")
install.packages("tidyverse")
library("nycflights13")
library("tidyverse")

# Had an arrival delay of two or more hours
filter(flights, arr_delay >= 120)

#Flew to Houston (IAH or HOU)
filter(flights, dest == "IAH" | dest == "HOU")

#Were operated by United, American, or Delta
airlines
filter(flights, carrier %in% c("AA", "DL", "UA"))

#Departed in summer (July, August, and September)
filter(flights, month == 7 | month == 8 | month == 9)

#Arrived more than two hours late, but didn't leave late
filter(flights, arr_delay > 120, dep_delay <= 0)

#Were delayed by at least an hour, but made up over 30 minutes in flight
filter(flights, dep_delay >= 60, dep_delay - arr_delay > 30)

#Departed between midnight and 6 am (inclusive)
filter(flights, dep_time <= 600 | dep_time == 0000)

#Question 2
filter(flights, between(dep_time, 600, 2400))

#Question 3
filter(flights, is.na(dep_time))

#Question 4
arrange(flights, desc(is.na(dep_time)), dep_time)

#Question 5
arrange(flights, desc(dep_delay))

#Question 6
arrange(flights, air_time)

#Question 7
select(flights, dep_time, dep_delay, arr_time, arr_delay)

#Question 9
flights %>%
  group_by(dest) %>%
  filter(!is.na(dep_delay)) %>%
  summarise(tot_mins = sum(dep_delay[dep_delay > 0]))

flights %>%
  filter(!is.na(dep_delay)) %>%
  group_by(tailnum, dest) %>%
  summarise(m = mean(dep_delay > 0), n = n()) %>%
  arrange(desc(m))

#Question 8
mutate(flights,
       dep_time = 60 * floor(dep_time/100) + (dep_time - floor(dep_time/100) * 100),
       sched_dep_time = 60 * floor(sched_dep_time/100) + (sched_dep_time - floor(sched_dep_time/100) * 100))
