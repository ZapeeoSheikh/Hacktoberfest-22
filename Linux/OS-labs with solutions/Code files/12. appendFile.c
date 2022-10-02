/*This program takes a number from the user and 
stores in the file program.txt.
After you compile and run this program, 
you can see a text file program.txt created. 
When you open the file, you can see the integer you 
entered.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   FILE *fptr;

   // use appropriate location
   //use a for append text file...
   fptr = fopen("program.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
else{
    char str[100];
   printf("Write text(max 100 char) to append to file.. ");
   
   //fgets is a function to get input of string from user....
   //first parameter will be array .... 'str' is array of 100 element
   //second parameter will be the limit it should be greater than length of array passed in first parameter
    //third paramter should be stdin
   fgets(str, 100 ,stdin);
   fprintf(fptr, "%s", str);
   fclose(fptr);
   
}
   return 0;
}