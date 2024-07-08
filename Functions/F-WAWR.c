//C funciton With Arguments and With Return Value
//In C, functions having return values cannot be declared within main funciton
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    
    printf("Enter the first value: \n");
    scanf("%d", &a);

    printf("Enter the second value: \n");
    scanf("%d", &b);

    //Function declaration
    int sum(int a, int b);

    //Function Call
    int result;
    result = sum(a,b);

    printf("The addition is: %d", result);


}
//Function defination
int sum(int a, int b)
{
    return a + b;
}