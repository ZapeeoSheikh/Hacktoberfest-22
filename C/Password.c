#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char pass[20], e_pass[20];
    int num1, num2, sum;
    printf("Create a Password: ");
    scanf("%s", pass);
    printf("\nEnter any two number to Add: ");
    scanf("%d %d", &num1, &num2);
    printf("\nEnter password to see the Result: ");
    scanf("%s", e_pass);
    if(!strcmp(pass, e_pass))
    {
        sum = num1 + num2;
        printf("\n%d + %d = %d", num1, num2, sum);
    }
    else
        printf("\nSorry! You entered a Wrong Password");
    getch();
    return 0;
}