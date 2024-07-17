#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptra;
    ptra = (int*)malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at element number %d: \n",i);
        scanf("%d", &ptra[i]);
    }
    
    for (int i = 0; i < 7; i++)//Fragmentation(Garbage value will be printed for last 2)
    {
        printf("The value at element number %d is: %d\n", i, ptra[i]);
    }

    free(ptra);
    
    return 0;
        
}