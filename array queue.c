#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nQUEUE MENU\n");
        printf("1: Enqueue (Insert)\n");
        printf("2: Dequeue (Remove)\n");
        printf("3: Show All Queue\n");
        printf("4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}

void enqueue()
{
    int value;

    if (rear == SIZE - 1)
    {
        printf("Queue is full.\n");
        return;
    }

    printf("Enter the value to enqueue: ");
    scanf("%d", &value);

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    queue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Dequeued value: %d\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void show()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
