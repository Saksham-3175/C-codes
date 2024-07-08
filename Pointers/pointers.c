#include <stdio.h>
int main()
{
    int a;
    int *ptra = &a;
    a = 1;

    printf("The address of pointer to int a is: %p\n", &ptra); // here, jiska value ye prta pointer store karra hai uska address store hoga. In this case, adress of ptra i.e address of pointer will be printed.

    printf("The value of ptra is: %d\n", *ptra); // here, jo value ye ptra pointer store karra hai wo print hoga. Alag alag format specifiers ka alag alag value ayega. In this case, vlaue of pointer will be printed.

    printf("The adress of a is: %p\n", &a); // Here, the address of variable a will be printed.

    int *ptrn1;
    printf("The value of prtn is: %d\n", ptrn1); // Here some garbage value will be printed.
    // To avoid this garbage value we use null.

    int *ptrn2 = NULL;
    printf("Now the value of ptrn is: %p\n", ptrn2); // The value printed will be null.
    return 0;
}