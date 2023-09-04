#include <stdio.h>
#define v 10

int a[v];
int r = -1, f = -1, i;

int InsertFirst(int val)
{
    if ((f == 0 && r == v - 1) || (f == r + 1))
    {
        printf("Queue is full.\n");
    }
    else
    {
        if (f == -1)
        {
            f = r = 0;
        }
        else if (f == 0)
        {
            f = v - 1;
        }
        else
        {
            f--;
        }
        a[f] = val;
    }
}

int InsertRear(int val)
{
    if ((f == 0 && r == v - 1) || (f == r + 1))
    {
        printf("Queue is full.\n");
    }
    else
    {
        if (f == -1)
        {
            f = r = 0;
        }
        else if (r == v - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        a[r] = val;
    }
}

int DeleteFirst()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            if (f == v - 1)
            {
                f = 0;
            }
            else
            {
                f++;
            }
        }
    }
}

int DeleteRear()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            if (r == 0)
            {
                r = v - 1;
            }
            else
            {
                r--;
            }
        }
    }
}

int Display()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        int k = f;
        while (1)
        {
            printf("%d ", a[k]);
            if (k == r)
            {
                break;
            }
            if (k == v - 1)
            {
                k = 0;
            }
            else
            {
                k++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int choice, val;

    do
    {
        
        printf("Queue Operations:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from First\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the value to insert at the first: ");
            scanf("%d", &val);
            InsertFirst(val);
            break;

        case 2:
            printf("Enter the value to insert at the rear: ");
            scanf("%d", &val);
            InsertRear(val);
            break;

        case 3:
            DeleteFirst();
            break;

        case 4:
            DeleteRear();
            break;

        case 5:
            Display();
            break;

        case 6:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } 
    while (choice != 6);

    return 0;
}