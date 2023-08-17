#include<stdio.h>

struct system {
    int a;
    char b;
    float c;
}v1;

int main()
{   //using assignment operation
    v1.a=2;
    v1.b='t';
    v1.c=5.7;

    printf("v1 = %d %c %f\n",v1.a,v1.b,v1.c);

    //using initialisation list
    struct system v2={5,'f',7.8};
    printf("v2 = %d %c %f\n",v2.a,v2.b,v2.c);
    
    //using designated list
    struct system v3 = {.a=9,.b='k',.c=6.9};
    printf("v3 = %d %c %f\n",v3.a,v3.b,v3.c);

    //using structure pointer
    struct system *v4 = &v1;
    v4->a=3;
    v4->b='u';
    v4->c=5.2;
    printf("v4 = %d %c %f\n",v4->a,v4->b,v4->c);
}