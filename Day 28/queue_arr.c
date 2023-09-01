#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int ar[10];
int n = 10;
int front = - 1;
int rear = - 1;

bool isempty()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is Empty \n");
        return true;
    }
    else return false;
}

//function to perform enqueue operation
void enqueue(int item) {
    // checking overflow condition
    if (rear == n - 1){
        printf("Overflow!\n");
        return;
    }
    else {
        // front and rear both are at -1 then 
        // set front and rear at 0 otherwise increment rear
        if (front == - 1 && rear==-1){
            front = 0;
            rear=0;
        }
        else{
            rear++;
        }
        //inserting element at rear
        ar[rear] = item;
        printf("Element inserted\n");
    }
}
//function to implement dequeue operation
void dequeue() {
    //checking underflow condition
    if (front == - 1 || front > rear) {
        printf("Underflow!");
        return ;
    }
    else {
        int item=ar[front];
        //displaying deleted element
        printf("Element deleted from queue is : %d\n",item);
        // if front and rear reach at end then initialize it at -1
        if(front == rear)  {  
            front = -1;  
            rear = -1;  
        }
        else{
            //incrementing the front
            front++;
        }
   }
}
//function to display all elements of queue
void display() {
    //checking whether queue is empty or not
    if (front == - 1){
        //if queue is empty simply return
        printf("Queue is empty\n");
        return;
    }
    else {
        // if queue is not empty print all the elements from rear to front
        printf("Elements are : ");
        for (int i = front; i <= rear; i++)
            printf("%d ",ar[i]);
        printf("\n");
   }
}
//function to display front element of queue
void fronte() {
    //checking whether queue is empty or not
    if (front == - 1){
        //if queue is empty simply return
        printf("Queue is empty");
        return;
    }
    else {
        // if queue is not empty print front element
        printf("Front Element is :%d\n",ar[front]);
   }
}

int main() {
    int ch;
    //displaying options of enqueue, dequeue, front, display to the user
        printf("1: Inserting element to queue(enqueue)\n");
        printf("2: Deleting element from queue(dequeue)\n");
        printf("3: Display front element of queue\n");
        printf("4: Display all the elements of queue\n");
        printf("5: Exit\n");
    do {
        //taking user choice 
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch) {
            //calling functions according to the choice of user
            case 1: {
                printf("enter element to be inserted:\n");
                int item;
                printf("%d",&item);
                enqueue(item);
                break;
            }
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: fronte();
                break;
            case 5: printf("Exit\n");
                break;
            default: printf("Invalid choice\n");
        }
    } while(ch!=5);
    return 0;
}
