#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
char arr[MAX];
int top=-1;

void push(char x)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow !!!\n");
        return;
    }
    arr[++top]=x;
}

void pop(){
    if(top==-1)
    {
        printf("Stack is Empty!!!\n");
        exit(1);
    }
    top--;
}

void isempty()
{
    if(top==-1)
    {
        printf("Stack is Empty!!!\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is Empty !!!\n");
        return;
    }

    for(int i=top;i>=0;i--)
    {
        printf("%c \n",arr[i]);
    }
}

void size()
{
    if(top==-1)
    {
        printf("Stack is Empty !!!\n");
        return;
    }
    printf("size of the stack is : %d\n",top+1);
}

int main()
{
    push('a');
    push('n');
    push('s');
    push('h');
    push('m');
    pop();
    pop();
    isempty();
    size();
    peek();
    return 0;
}