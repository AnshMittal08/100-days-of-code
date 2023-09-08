#include<stdio.h>

void sum()
{
    int n=6;
    int a,b;
    scanf("%d %d",&a,&b);
    
    int sum=0;
    sum=a+b;

    while(n--)
    {
        int x;
        scanf("%d",&x);

        sum+=x;
    }

    printf("total sum is: %d",sum);
}

int main()
{
    sum();
}