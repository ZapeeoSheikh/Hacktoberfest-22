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
   fptr = fopen("file_append.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
else{
     
   fprintf(fptr, "%s", "\nThis text is appended later to the file, using C programming");
   fclose(fptr);
   printf("\nFile appended,please check file_append.txt!\n");
 
}
   return 0;
}