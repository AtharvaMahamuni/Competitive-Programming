#include <stdio.h>

int front = -1;
int rear = -1;
int queue[5];

void enqueue()
{
    if (rear == 4)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        int num;
        printf("Enter no.to enqueue:\n>>> ");
        scanf("%d", &num);
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            queue[rear] = num;
        }
        else
        {
            rear++;
            queue[rear] = num;
        }
    }

    printf("------------------------------------\n");
}
void dequeue()
{
}
void traverse()
{
}

int main()
{
    int i = 0;
    do
    {
        printf("----------------MENU-----------------\n");
        printf("Choose the option from following: \n");
        printf("1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit\n");
        printf("Option No.: ");
        scanf("%d", &i);
        printf("--------------------------------------\n");

        switch (i)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            break;
        default:
            printf("Wrong input :-(");
        }
    } while (i != 4);

    return 0;
}
