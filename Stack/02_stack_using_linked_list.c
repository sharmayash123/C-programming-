/*
 Stack Implementation Using Linked List
 
 Operations:
  Push, Pop, Peek, Display, Size, isEmpty
 
 Language: C
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

// Add a new element at the top of the stack
void push(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // Check if memory allocation failed
    if (newNode == NULL)
    {
        printf("Stack Overflow! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack.\n", value);
}

// Remove the top element from the stack
void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow! Empty stack\n");
        return;
    }

    struct node *temp = top;

    printf("Popped element: %d\n", top->data);

    top = top->next;
    free(temp);
}

// Display the top element without removing it
void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}

// Display all elements from top to bottom
void display()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    struct node *temp = top;

    printf("Stack elements (top to bottom):\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Count the total number of nodes in the stack
int size()
{
    int count = 0;
    struct node *temp = top;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

// Check whether the stack is empty
int isEmpty()
{
    return top == NULL;
}

int main()
{
    int choice, value;

    do
    {
        printf("\n--- Stack Using Linked List ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Size\n");
        printf("6. Check if Empty\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation selected by user
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

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again\n");
        }

    } while(choice != 0);

    // Free all remaining nodes before exiting
    while (top != NULL)
    {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }


    return 0;
}
