#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max],front=-1,rear=-1;

void enqueue(int x)
{
    if(front==rear+1 || (front==0 && rear==max-1))
    {
        printf("Queue is Full !!");
    }
    else
    {
        if(front==-1)
        front=0;
        rear = (rear+1)%max;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty !!");
    }
    else
    {
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%max;
        }
    }
}

void print()
{
    if(front==-1)
    {
        printf("Queue is Empty !!");
    }
    else
    {
        for(int i=front;i<=rear;i=(i+1)%max)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(3);
    enqueue(6);
    enqueue(7);
    enqueue(1);
    enqueue(8);
    dequeue();
    dequeue();
    print();
}