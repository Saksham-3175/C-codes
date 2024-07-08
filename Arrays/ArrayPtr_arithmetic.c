#include<stdio.h>
#include<conio.h>
int main()
{
    
    int arr[] = {1,2,3,4,5,45,423,535,342};
    //size is 9
    
    printf("Value at index 4 is: %d\n", arr[4]);
    //5
    
    printf("Value at index 4 is: %d\n", arr + 4);
    //5 -> 0 + 5 = 5, But address will be printed as the op we did is of pointers.
    
    printf("Value at index 4 is: %d\n", *arr + 4);
    //By dereferencing, 5 will be printed
    
    printf("Address of index 4 is: %d\n", &arr[4]);
    //Address of index 4
    
    return 0;
}