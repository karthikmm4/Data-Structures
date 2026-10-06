#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue()
{
    int value;
    if(rear==MAX-1)
    {
        printf("Queue Overflow!\n");
    }else
    {
        printf("enter value to insert:\n");
        scanf("%d",&value);

        if(front==-1)
            front=0;

        rear++;
        queue[rear]=value;
        printf("%d inserted into queue\n",queue[rear]);
    }
}

void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue Underflow!\n");
    }else
    {

    printf("%d deleted from queue\n",queue[front]);
    front++;

     if(front>rear)
     {
         front=-1;
         rear=-1;
     }
    }

}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty\n");
    }else
    {
        printf("The queue elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
int main()
{
    int choice;

    while(1)
    {
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
        printf("4. exit\n");

        printf("Enter your choice\n");
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
            default: printf("Invaild choice\n");
        }
    }
}
