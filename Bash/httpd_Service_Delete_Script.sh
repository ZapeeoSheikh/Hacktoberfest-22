#!/bin/bash

# Stop the httpd service
echo "####################################################################"
sudo systemctl stop httpd
echo "Stopped the httpd service"
sleep 5

# Delete the index.html file
echo "####################################################################"
sudo rm -rf /var/www/html/*
echo "Removed the index file"
sleep 5

# Delete the httpd service
echo "####################################################################"
sudo yum remove httpd -y > /dev/null
echo "Completed!!!!!!! Service Deleted"