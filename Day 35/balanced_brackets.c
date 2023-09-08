#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char x)
{
    if (top == MAX - 1)
    {
        printf("stack overflow !!!");
        return;
    }
    stack[++top] = x;
}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty !!!");
        return;
    }
    top--;
}

int main()
{
    char str[100];
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            push(str[i]);
        }

        if (str[i] == '}' || str[i] == ')' || str[i] == ']')
        {
            if ((str[i] == ')' && stack[top] == '(') || (str[i] == '}' && stack[top] == '{') || (str[i] == ']' && stack[top] == '['))
            {
                pop();
            }
        }
    }

    if (top != -1)
        printf("Not balanced");
    else
        printf("balanced");
}