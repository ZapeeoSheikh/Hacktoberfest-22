/***********************read the given file	and	display	file contents***************/
#include<stdio.h>

int main(void)
{
//creating pointer to point a file
	FILE *ptr;
	//fopen function is use to open a file in any mode i.e. w -> write 
	ptr = fopen("my-info.txt", "r");
	//when we try to open a file ptr will point to null if not file exsist
	if(ptr==NULL)
	{
		printf("Can't open file...");
		//close program	
	}	
else
{
printf("File contents : \n");
char c;
c=fgetc(ptr);
	while(c  !=  EOF)
	{
	// read next charctor.... 
		c=fgetc(ptr);
		//display content
		putchar(c);
	}
	fclose(ptr);
}
}
