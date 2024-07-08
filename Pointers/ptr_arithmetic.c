#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a = 21;
    int *ptra = &a;
    // ptra = ptra+3; //Here, it will add 4*3=12 to the inital address of ptra. As per our architecture, the size of int is 4 bytes.

    printf("The address of ptra is: %d\n", ptra);// It will print the adress of a. To print value of pointer i.e value of a, dereffer ptra with *.
    //printf("The address of a is: %d", &a);

    //printf("The size of int is: %d\n", sizeof(double));   
    return 0;
}