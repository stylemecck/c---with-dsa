#include<stdio.h>
#include<conio.h>
int main() {
  int i, j, t, n, a[100], flag=0;
printf("Enter the size of an array:\n");
scanf("%d",&n);

for(i=0; i<n; i++ )
{
  scanf("%d", &a[i]);
}

for(i=1; i<=n; i++)
{
  t=a[i];
  j=i-1;

  while(j>=0 && a[j]>t)
  {
    a[j+1]=a[j];
    j=j-1;
  }
  a[j+1]=t;
}

for(i=0; i<n; i++)
{
  printf("%d\n", a[i]);
}
getch();
}
