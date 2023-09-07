#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void Insertend(int val)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = head;
    }
    else
    {
        struct node *ptr = head->prev;
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
    }
}

void Insertfirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        struct node *ptr = head->prev;
        temp->prev = ptr;
        ptr->next = temp;
        head->prev = temp;
    }

    head = temp;
}

void midinsert(int val, int pos)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *ptr = head;

    while (ptr->data != pos && ptr->next != head)
    {
        ptr = ptr->next;
    }

    temp->prev = ptr;
    temp->next = ptr->next;
    ptr->next->prev = temp;
    ptr->next = temp;
}

void Deletend()
{
    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *ptr = head->prev;
    ptr->prev->next = head;
    head->prev = ptr->prev;
    free(ptr);
}

void Deletefirst()
{
    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *temp = head;

    if (temp->next == head)
    {
        head = NULL;
    }
    else
    {
        head = temp->next;
        head->prev = temp->prev;
        temp->prev->next = head;
    }

    free(temp);
}

void middelete(int pos)
{
    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *ptr = head;

    while (ptr->data != pos && ptr->next != head)
    {
        ptr = ptr->next;
    }

    if (ptr->data != pos)
    {
        printf("Element not found in the list.");
        return;
    }

    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;

    if (ptr == head)
    {
        head = ptr->next;
    }

    free(ptr);
}

void Display()
{
    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *ptr = head;

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } 
    while (ptr != head);
}

int main()
{
    int choice, val, pos;

    while (1)
    {

        printf("\nMenu:\n");
        printf("1. Insertend\n");
        printf("2. Insertfirst\n");
        printf("3. midinsert\n");
        printf("4. Deletend\n");
        printf("5. Deletefirst\n");
        printf("6. middelete\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter value to insert at the end: ");
            scanf("%d", &val);
            Insertend(val);
            break;

        case 2:
            printf("Enter value to insert at the beginning: ");
            scanf("%d", &val);
            Insertfirst(val);
            break;

        case 3:
            printf("Enter value to insert in the middle: ");
            scanf("%d", &val);
            printf("Enter mid insert pos: ");
            scanf("%d", &pos);
            midinsert(val, pos);
            break;

        case 4:
            Deletend();
            break;

        case 5:
            Deletefirst();
            break;

        case 6:
            printf("Enter value to delete in the middle: ");
            scanf("%d", &pos);
            middelete(pos);
            break;

        case 7:
            Display();
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
