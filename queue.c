#include <stdio.h>
#include <stdlib.h>
#define v 10
int a[v];
int r=-1,f=-1,k;

void Display()
{
    for (k=f;k<=r;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
}

void Insert(int val)
{
    if (r >= v - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        r++;
        a[r] = val;
        if (f == -1)
        {
            f = 0;
        }
    }
}

void Delete()
{
    if (f < 0)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f++;
        if (f > r)
        {
            f = -1;
            r = -1;
        }
    }
} 

int main()
{
    Insert(100);
    Insert(200);
    Insert(300);
    Insert(400);
    Insert(500);
    Display();

    Delete();
    Display();

    return 0;
}
