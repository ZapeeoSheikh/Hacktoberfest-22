/********maths with args**********/

#include<stdio.h>
#include<string.h>

    int main(int argc, char *argv[]){

        //if no argument is passed
        if(argc == 1){
        printf("No argument is passed!\n");
    }

//if any argument is passed
else{
        int a=5, b=6; //take two integers
        char argument[100];

        strcpy(argument,argv[1]);//copy your arguments into an array

        if(  strcmp(argument,"sum")==0 ){

            printf("Addition is: %d", a+b);
    }
    else if(strcmp(argument,"sub")==0  ){

        printf("Subtraction is : %d", a-b);
    }

}

return 0;
}

/********maths with args**********/
