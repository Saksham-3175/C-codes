#include <stdio.h>
int main()
{
    // mthd 1 if initialization as size[5]
    // int marks[5];

    // for (int i = 0; i <= 5; i++)
    // {
    //     printf("Enter the marks of %d of array: \n", i);
    //     scanf("%d", &marks[i]);
    // }

    // for (int i = 0; i <= 5; i++)
    // {
    //     printf("The value of %d element is %d \n", i, marks[i]);
    // }

    // mthd 2 declaration with initialization, here if size is not written then also it's ok.
    // int number[4] = {0, 1, 2, 3};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The entered number is %d at element %d \n", i, number[4]);
    // }

    // 2D arrays

    // 2x2 matrix
    //  int mat[2][2] = {{1,2}, {2,1}};
    // mthd1
    //  for (int i = 0; i < 2; i++)
    //  {
    //      for (int j = 0; j < 2; j++)
    //      {
    //          //printf("Value of %d %d is %d\n", i, j, mat[i][j]);
    //      //mthd2 Matrix form.
    //          printf("%d ", mat[i][j]);
    //      }
    //      printf("\n");
    //  }

    // 3x3 Matrix
    // char mat[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    // for (char i = 0; i < 3; i++)
    // {
    //     for (char j = 0; j < 3; j++)
    //     {
    //         printf("%c ", mat[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}