#include<stdio.h>
struct str1
{
    char a;
    int b;
    short int c;
};

void main()
{
    struct str1 var1={'A',3,1};

    printf("%ld",sizeof(var1));
}