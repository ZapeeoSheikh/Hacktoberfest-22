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
   int num;
   FILE *fptr;

   // use appropriate location
   fptr = fopen("/Desktop/program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
else{
   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);
}
   return 0;
}