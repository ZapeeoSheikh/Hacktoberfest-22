/***********************read the given file	and	display	file contents***************/
#include<stdio.h>
int main(void)
{
//creating pointer to point a file
	FILE *ptr;
	//fopen function is use to open a file in any mode i.e. w -> write 
	ptr = fopen("sample.txt", "r");
	//when we try to open a file ptr will point to null if not file exsist
	if(ptr==NULL)
	{
		printf("Can't open file...");
		//close program	
	}
else
{
//declaring a char to read file
char c;
//fgetc is a function that will get a charctor from file pointer
// this loop wil contitnue util EOF (end of file charachtor reached
//reading first charctor 
c=fgetc(ptr);
//if c is not EOF contine to iterate the loop;
	while(c  !=  EOF)
	{
	// read next charctor.... 
		c=fgetc(ptr);
		//display content
		putchar(c);
	}
	fclose(ptr);
}

	return 0;
}
/*************** read file*******/