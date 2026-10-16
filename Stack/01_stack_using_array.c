/*
Stack Implementation Using Array

Operations:
Push, Pop, Peek, Display, Size, isEmpty, isFull

Language: C
*/


#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{   // Check if the stack has reached maximum size  
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Stack is full\n");
        return;
    }
    top++;
    stack[top] = value;

    printf("%d pushed into stack\n", value);
}

void pop()
{   // Popping is not possible when the stack is empty
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty\n");
        return;
    }

    printf("Popped element: %d\n", stack[top]);
    top--;  // Move the top pointer to previous element after popping
}

void peek()
{   
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int size()
{  
    return top + 1;       // in case if no element in stack then top = -1, size = -1 + 1 = 0
}

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}

int main()
{
    int choice, value;

    do
    {
        printf("\n--- Stack Using Array ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Size\n");
        printf("6. Check if Empty\n");
        printf("7. Check if Full\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Stack size: %d\n", size());
                break;

            case 6:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 7:
                if (isFull())
                    printf("Stack is full\n");
                else
                    printf("Stack is not full\n");
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again\n");
        }

    } while(choice != 0);
  return 0;
}
