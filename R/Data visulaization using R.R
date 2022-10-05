data <- cars
head(data)
dim(data)

plot(x = data$speed,y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance"
)
plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     lab=c(20,15,10)
)


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     lab=c(20,15,10),
     cex.axis = 0.7,
)


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     lab=c(20,15,10),
     cex.axis = 0.7,
     las = 1 #default is 0=vertical
)


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     pch=16
)
points(x=c(23,26), y=c(60,61), col="red")


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     pch=16,
     xlim=c(4,26)
)
points(x=c(23,26), y=c(60,61), col="red")


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     xlim=c(4,26)
)
abline(a=17.5, b=3.93, col="blue", lty=2)


plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     xlim=c(4,26)
)
abline(a=17.5, b=3.93, col="blue", lty=2)
title(expression(paste("Regression : ",beta[0], "= -17.3, ", beta[1], "= -3.93")))



plot(x = data$speed, y = data$dist,
     xlab = "Speed",
     ylab = "Distance",
     main = "Speed vs Distance",
     pch=16,
     xlim=c(4,26)
)
points(x=c(23,26), y=c(60,61), col="red")
abline(a=17.5, b=3.93, col="blue", lty=2)
legend("topleft",c("Old", "New"), col=1:2,pch=1)


par(mfrow=c(1,2))
hist(data$speed, main="Speed histogram", xlab="Speed")
hist(data$dist, main="Distance histogram", xlab="Distance")


layout(matrix(c(1,1,2,3), ncol=2))
plot(x = data$speed, y = data$dist)
hist(data$speed, main="Speed histogram", xlab="Speed")
hist(data$dist, main="Distance histogram", xlab="Distance")
