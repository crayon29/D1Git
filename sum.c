#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
   int m=0;
   int n=0;
   int s=sum(m,n);
   printf("sum=%d",s);
    return 0;
}