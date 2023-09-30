#include<stdio.h>
#include<stdlib.h>

int main(){
int row, col,  a[10][10], b[10][10],c[10][10],i,j;

printf("Enter the row  of the first matrix:\n");
scanf("%d", &row);
printf("Enter the  col of the first matrix:\n");
scanf("%d", &col);

printf("enter the element of first matrix\n");

for( i=0; i<row; i++ )
{
    for( j=0; j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("enter the element of second matrix\n");

for( i=0; i<row; i++ )
{
    for( j=0; j<col;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

printf(" the element of first matrix\n");

for(  i=0; i<row; i++ )
{
    for(  j=0; j<col;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf(" the element of second matrix\n");

for( i=0; i<row; i++ )
{
    for( j=0; j<col;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

for(int i=0; i<row; i++)
{
    for (j=0; j<col; j++)
    {
        
        c[i][j]=a[i][j]+ b[i][j];
    }
}

printf("The addition of two matrix is:\n");

for (i=0; i<row; i++)
{
    for( j=0; j<col; j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;
}
