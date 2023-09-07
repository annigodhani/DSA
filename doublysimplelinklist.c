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
        return;
    }
    else
    {
        struct node *ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void Insertfirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if (head != NULL)
    {
        head->prev = temp;
    }

    head = temp;
}

void midinsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    while (ptr != NULL)
    {
        if (ptr->data == pos)
        {
            temp->next = ptr->next;
            temp->prev = ptr;

            if (ptr->next != NULL)
            {
                ptr->next->prev = temp;
            }
            ptr->next = temp;
            return;
        }
        ptr = ptr->next;
    }

    printf("Position is not in the list.\n");
    free(temp);
}

void Deletend()
{
    if (head == NULL)
    {
        printf("List Is Empty.....\n");
        return;
    }

    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL)
    {
        ptr->prev->next = NULL;
    }
    else
    {
        head = NULL;
    }

    free(ptr);
}

void Deletefirst()
{
    if (head == NULL)
    {
        printf("List Is Empty.....\n");
        return;
    }

    struct node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(temp);
}

void middelete(int pos)
{
    struct node *ptr = head;

    while (ptr != NULL)
    {
        if (ptr->data == pos)
        {
            if (ptr->prev != NULL)
            {
                ptr->prev->next = ptr->next;
            }
            else
            {
                head = ptr->next;
            }
            if (ptr->next != NULL)
            {
                ptr->next->prev = ptr->prev;
            }
            free(ptr);
            return;
        }
        ptr = ptr->next;
    }

    printf("Value is not in the list.%d\n", pos);
}

void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is Empty.....\n");
        return;
    }
    else
    {
        printf("List elements: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
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
