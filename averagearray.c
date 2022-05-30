#include <stdio.h>
int main()
{
     int a[8],i,s=0,g,l;
     float avg;
     printf("Enter 8 Numbers:\n");
     for(i=0;i<8;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
          avg=s/8.0;
     }
     printf("Sum of Array Elements = %d\n",s);
     printf("Average of Elements   = %.2f\n",avg);
     g=a[0];
     for(i=0;i<8;i++)
          if(a[i]>g)
               g=a[i];
     printf("Greatest Element      = %d\n",g);
     l=a[0];
     for(i=0;i<8;i++)
          if(a[i]<l)
               l=a[i];
     printf("Lowest Element        = %d",l);
     return 0;
}


compilation terminated.
~/19ECB132-1$ gcc averagearray.c
~/19ECB132-1$ ./a.out
Enter 8 Numbers:
1 2 3 4 5 6 7 8
Sum of Array Elements = 36
Average of Elements   = 4.50
Greatest Element      = 8
Lowest Element        = 1~/19ECB132-1$ 