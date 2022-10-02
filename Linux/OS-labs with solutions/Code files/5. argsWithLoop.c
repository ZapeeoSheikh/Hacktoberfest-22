#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("The number of arguments are: %d\n",argc);
    printf("The arguments passed are:");

    for ( i = 0; i < argc; i++)
    {
    printf("%s\n", argv[i]);
    }
return 0;
}
