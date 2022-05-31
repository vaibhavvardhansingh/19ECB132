#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}  
output
~/19ECB132-1$ gcc factorial.c
~/19ECB132-1$ ./a.out
Enter a number: 5
Factorial of 5 is: 120~/19ECB132-1$ ^C