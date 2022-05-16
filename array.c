#include<conio.h>
#include<stdio.h>
#define max 100
void maxmin(int[],int);
void main()
{
    int a[max],i,n;
    printf("enter the limit of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    maxmin(a,n);
    getch();
}
void maxmin(int a[max],int n)
{
  