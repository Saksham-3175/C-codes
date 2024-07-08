#include<stdio.h>
#include<conio.h>
//Function declaratrion
// void is used as the funciton is just printing the value and not returning anything.
// The compiler is reciving any thing so no return value and henc void.
void table(int num);
//Fuction Defination
void table(int num)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
}

int main()
{
    int num;

    printf("Enter the number to get Table of: \n");
    scanf("%d", &num);

    table(num);

    return 0;
}