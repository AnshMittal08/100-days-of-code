#include<stdio.h>
#include<stdlib.h>

int func(const void *a,const void *b)
{
    return (*(int *)a - *(int *)b); 
}

int main()
{
    int arr[] = {7,2,6,9,1,3};

    qsort(arr,6,sizeof(int),func);

    for(int i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
}