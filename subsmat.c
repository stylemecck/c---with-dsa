#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arow, bcol, brow, acol;
    int a[10][10], b[10][10], sub[10][10], i, j;

    printf("Enter the row of the 1st matrix:\n");
    scanf("%d", &arow);

    printf("Enter the colmun of the 1st matrix:\n");
    scanf("%d", &acol);
    // elements of the first matrix
    printf("Enter the element of the first matrix:\n");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // part 2

    printf("Enter the row of the 2st matrix:\n");
    scanf("%d", &brow);

    printf("Enter the row of the 1st matrix:\n");
    scanf("%d", &bcol);

    printf("Enter the element of the second matrix:\n");
    for (i = 0; i < brow; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf(" the element of the 1st matrix:\n");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

     printf(" the element of the 2st matrix:\n");
    for (i = 0; i < brow; i++)
    {
        for (j = 0; j < brow; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    //substraction of matrix

    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            sub[i][j]= a[i][j] - b[i][j];
        }
       
    }

     printf(" substraction of the matrix is\n");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}