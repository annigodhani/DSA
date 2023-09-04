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
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void Insertfirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;

    head = temp;
}

void midinsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
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
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
}

void Deletefirst()
{
    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    struct node *temp = head;

    head = head->next;

    free(temp);
}

void middelete(int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = ptr->next;
    free(ptr);
    return;
}

void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is Empty.....");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
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