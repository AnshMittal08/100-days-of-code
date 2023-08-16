#include<stdio.h>
void main()
{
    int a,b,c,d,big;
    printf("enter four numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=(a>b)?a:b;
    big=(big>c)?big:c;
    big=(big>d)?big:d;
    printf("largest number is %d",big);

}