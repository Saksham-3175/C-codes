// Function With Arguments and Without Return value
#include<stdio.h>
#include<conio.h>
// Declaration,   Here void is used because there is no return value.
void printstar();
int main()
{
    
    // Defination,    int n is the argument i.e no. of time the stars will be printed
    void printstar(int n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c", '*');
        }
        
    }

     
    // Call,  10 is the argument i.e. the star will be printed 10 times.
    printstar(10);
}