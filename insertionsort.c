#include<stdio.h>
#include<conio.h>
void main(){
  int i, a[100], n, j,t;
  printf("Enter the size of Array:\n");
  scanf("%d", &n);
  for(i=0; i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=1; i<=n; i++)
  {
    t=a[i];
    j=i-1;
    while (j>=0 && a[i]>j)
    {
      a[j+1] = a[j];
      j=j-1;
    }
    a[j+1]=t;
    
  }
  printf("The sorted elements are:\n");
  for(i=0; i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}