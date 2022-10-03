read -p "Enter n " n

echo "For loop to print first n numbers"
for(( i=1;i<=$n;i++ ))
do
	echo -n "$i "
done
echo ""


echo "While loop to print first n numbers"
i=1
while(($i <= $n))
do
	echo -n "$i "
	i=$(expr $i + 1)
done
