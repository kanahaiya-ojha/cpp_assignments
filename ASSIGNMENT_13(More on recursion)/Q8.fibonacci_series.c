// 8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int n)
{
    if(n==1||n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    printf("Ennter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
    
    return 0;
}