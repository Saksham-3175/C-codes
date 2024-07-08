// Function Without Arguments and Without Returnvalue
#include <stdio.h>
#include <conio.h>
// Declaration, here void is used as no arguments are supposed to be present.
void callmesaksham();
int main()
{

    // Defination
    void callmesaksham()
    {
        printf("This is Saksham here, your new assistant.\n");
    }
    // No value is returned at the end of function.

    printf("Assistant number 3: \n");

    // Calling
    callmesaksham();

    return 0;
}