#include<stdio.h>
#include<conio.h>
#define MAX 20
void frequency(int [],int);

int main()
{
     int a[MAX],n,i;
     printf("Enter limit of array: ");
     scanf("%d",&n);
     printf("\nEnter array: ");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     frequency(a,n);
     return(0);
}
void frequency(int a[],int n)
{
     int i,j,k,num,c=0;
     for(i=0;i<n;i++)
     {
          num=a[i];
          c=1;
          for(j=i+1;j<n;j++)
          {
               if(a[j]==num)
               {
                    c++;
                    for(k=j;k<n;k++)
                    {
                         a[k]=a[k+1];
                    }
                    n--;
                    j--;
                }
          }
          printf("\nthe frequency of element %d  is %d",a[i],c);
     }
}
Enter limit of array: 10

Enter array: 1
2
3

46
7
7
7
7
7
7

the frequency of element 1  is 1
the frequency of element 2  is 1
the frequency of element 3  is 1
the frequency of element 46  is 1
the frequency of element 7  is 6