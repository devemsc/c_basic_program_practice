#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front=-1, rear=-1;

void peek()
{
    if(front==-1)
    {
        printf("Invalid\n");
    }else
    {
        printf("The Peek Value is %d\n", queue[front]);
    }
}

int isEmpty()
{
    return (front == -1 && rear == -1);
}

int isFull()
{
    return (rear == SIZE - 1);
}

void Enqueue(int value)
{
    if(isFull())
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}

void Dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if(isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    display();

    Dequeue();
    display();

    return 0;
}
