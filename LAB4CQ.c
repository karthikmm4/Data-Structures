#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue()
{
    int value;
    if((rear+1)%MAX==front)
    {
        printf("Queue overflow\n");
        return;
    }
    printf("enter value:\n");
    scanf("%d",&value);

    if(front==-1)
    {
        front=rear=0;
    }else
    {
        rear=(rear+1)%MAX;
    }
    queue[rear]=value;
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue underflow\n");

    }else if(front==rear)
    {
        front=-1;
        rear=-1;
    }else
    {
        front=(front+1)%MAX;
    }
}

void display()
{
    int i=front;
    if(front==-1)
    {
        printf("Queue is empty\n");
    }else
    {
        printf("Queue elements are:\n");
        while(i!=rear)
        {
            printf("%d\n",queue[i]);
            i=(i+1)%MAX;
        }
        printf("%d\n",queue[rear]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");

        printf("enter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            case 4: printf("EXIT\n");
            return 0;

            default: printf("Invalid choice");


        }
    }
}
