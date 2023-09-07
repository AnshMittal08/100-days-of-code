#include<stdio.h>

int gcd(int a,int b)
{
    if(b!=0)
    {
        return gcd(b,a%b);
    }
    else 
    return a;
}

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    int ans = gcd(x,y);
    printf("%d",ans);
}