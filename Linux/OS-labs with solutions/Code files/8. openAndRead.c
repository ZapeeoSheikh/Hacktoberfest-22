/*This program reads the integer present in the program.txt file 
and prints it onto the screen.
If you successfully created the file from openAndWrite.c, 
running this program will get you the integer you entered.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("/Desktop/program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   else{
   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
   }
   return 0;
}