/***********************read the given file	and	display	file contents***************/
#include<stdio.h>
void readFile(FILE * ptr);
int main(void)
{
//creating pointer to point a file
	FILE *ptr;
	//fopen function is use to open a file in any mode i.e. w -> write 
	ptr = fopen("file_append.txt", "r");
	//when we try to open a file ptr will point to null if not file exsist
	if(ptr==NULL)
	{
		printf("Can't open file...");
		//close program	
	}	
else
{
printf("File contents : \n");
readFile(ptr);
}
//appending
printf("Enter data to append : ");
ptr =fopen("file_append.txt", "a");
//a-start
char data[50];
    
    if (ptr== NULL)
    {
        printf("File cannot be opened\n");
    }
    else
    {
        printf("File is Opened\n");
        // get user input
        printf("Enter text to write\n");
        fgets(data, 50, stdin);

        //Append text to file
        fputs(data, ptr);
    }
    fclose(ptr);
//a-end
//now open apeended file
ptr = freopen("file_append.txt", "a",ptr);
printf("appended successfully\n changed file is : \n");
readFile(ptr);
fclose(ptr);

	return 0;
}


void readFile(FILE *ptr){
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
/*************** read file*******/
