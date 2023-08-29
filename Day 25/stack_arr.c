// Implementation of stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int top = -1;

void push(int x)
{
    if(top==MAX-1){
    printf("Tack Overflow !!\n");
    return;
}
arr[++top] = x;
}

void pop()
{
    int val;
    if(top==-1)
    {
        printf("Stack is Empty !!\n");
        exit(1);
    }
    top--;
    return;
}

void peek()
{
    int i;
    if(top == -1) {
        printf("Stack is Empty !!\n");
        return;
    }

    for(i=top;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void isEmpty()
{
    if(top==-1)
    {
        printf("Stack is Empty !!\n");
    }
    else
    printf("Stack is not Empty!!\n");
}

void size()
{
    if(top == -1)
    {
        printf("Stack is Empty!!");
        return;
    }
    printf("size of stack is %d",top+1);
}

int main()
{
    push(2);
    push(7);
    push(4);
    push(8);
    push(6);
    pop();
    peek();
    isEmpty();
    size();
}