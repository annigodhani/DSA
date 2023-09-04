#include<stdio.h>
#define v 10
int a[v];
int f = -1,r = -1;
int Display()
{
    int k = f;
    if(f<0)
    { 
        printf("Queue is empty.....");
    }
    else
    {
        do
        {
            printf("%d ",a[k]);
            k = (k+1)%v;
        } while (k != (r+1)%v);
        
    }
    printf("\n");
}

int Insert(int val)
{
    if(r<0)
    {
        f = r = 0;
        a[r] = val;
    }
    else if((r+1) % v == f)
    {
        printf("Queue is full.....");
    }
    else
    {
        r = (r+1) % v;
        a[r] = val;
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
        f = (f+1) % v;
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

    Insert(600);
    Display(); 
}