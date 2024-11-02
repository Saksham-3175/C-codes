#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptra;
    int n;

    ptra = (int *)malloc(n * sizeof(int));

    printf("Enter the size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &ptra[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is: %d\n", i, ptra[i]);
    }

    free(ptra);
    return 0;
}