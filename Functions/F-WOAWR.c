// Function Without Arguments and With Return value.

#include <stdio.h>
#include <conio.h>

// Declaration
int numout();

int main()
{
    // Defination
    int numout()
    {
        int n;
        printf("Enter a number: \n");
        scanf("%d", &n);
        return n;
    }

    int c;

    // Call
    c = numout();

    printf("The number entered was... %d\n", c);

    return 0;
}