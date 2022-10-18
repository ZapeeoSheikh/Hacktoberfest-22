#!/bin/bash

#Bash script to find the longest term from a file
#enter the file as an argument 

file=$1 
if [ -z $file ]
then
	echo "Error: Please enter a txt file."
else
	max=-1  
	for word in `cat $file`       
	do
	        len=${#word}    
	        if [[ $len -gt $max ]];then     
	                max=$len
	        fi
	done
	for word in `cat $file`       
	do
	        len=${#word}            
	        if [ $len == $max ];then        
	                echo $word    
	        fi
	done
fi
