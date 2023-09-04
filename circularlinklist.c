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
        temp->next = head; 
        return;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = head; 
    }
}

void Insertfirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    struct node *last = head;

    temp->data = val;
    temp->next = head;

    if (head == NULL)
    {
        temp->next = temp; // Make it circular
    }
    else
    {
        while (last->next != head)
        {
            last = last->next;
        }
        last->next = temp;
    }

    head = temp;
}

void midinsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;

    while (ptr->data != pos && ptr->next != head)
    {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

void Deletend()
{
    struct node *ptr = head;
    struct node *p;

    if (ptr == NULL)
    {
        printf("List Is Empty.....");
        return;
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
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
    struct node *ptr = head;

    if (temp->next == head)
    {
        head = NULL;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp->next;
        head = temp->next;
    }

    free(temp);
}

void middelete(int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    struct node *p;

    if (ptr == NULL)
    {
        printf("List Is Empty.....");
        return;
    }

    while (ptr->data != pos && ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }

    if (ptr->data != pos)
    {
        printf("Element not found in the list.");
        return;
    }

    p->next = ptr->next;

    if (ptr == head)
    {
        head = p->next;
    }

    free(ptr);
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
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
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
