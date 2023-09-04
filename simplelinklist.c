#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void Insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
 
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    } 
    ptr->next = temp;
    return;
}

void Deletend()
{
    struct node *ptr = head;
    struct node *p;

    if (ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is Empty.....");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int choice;
    int val;

    while (1)
    {
        
        printf("\nMenu:\n");
        printf("1. Insert at the end\n");
        printf("2. Delete from the end\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            Insertend(val);
            break;

        case 2:
            Deletend();
            break;

        case 3:
            Display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}