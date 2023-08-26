#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int x;
    scanf("%d",&x);

    

    for(int i=0;i<x;i++)
    {
        int ans=fibonacci(i);
        printf("%d ",ans);
    }
}