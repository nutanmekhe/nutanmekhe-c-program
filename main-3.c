/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,k;
    n=5;
    for(i=0;i<n;i++)
    { printf("\t");
      for(j=n-1;j>i;j--)
      { printf(" "); }
      for(k=0;k<=i;k++)
      {
          printf("* ");
      }
      printf("\n");
    }
    for(i=0;i<n-1;i++)
    { printf("\t");
      for(j=0;j<=i;j++)
      { printf(" "); }
      for(k=n-2;k>=i;k--)
      { printf("* "); }
      printf("\n");
    }
    
    return 0;
}
