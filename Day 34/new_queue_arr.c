#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define SIZE 10

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item){
    if(rear == SIZE-1){
        printf("Can't enqueue as the queue is full/Queue Overflow !!\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        
        queue[++rear] = item;
        printf("We have enqueued %d\n",item);
   }
}

void dequeue(){
    if(front == -1){
        printf("Can't dequeue as the queue is empty\n");
    }
    else{
        printf("We have dequeued : %d\n", queue[front]);
        front = front + 1;
        
        if(front > rear){
            front = -1;
            rear = -1;
        }
   }
}

void printQueue(){
    if(rear == -1)
        printf("\nUnable to display as queue is empty");
    else{
        int i;
        printf("\nThe queue after enqueue & dequeue ops looks like :");
        
        for(i = front; i <= rear; i++)
            printf("%d ",queue[i]);
   }
}

bool isempty()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is Empty \n");
        return true;
    }
    else {
        printf("Queue is not Empty\n");
        return true;
    }
}

int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    dequeue();
    dequeue();
    isempty();
    printQueue();
    return 0;
}
