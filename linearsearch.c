#include<stdio.h>
#include<stdlib.h>
#define n 17
int linearsearch(int a[],int x)
{
    for(int k=0;k<n;k++)
    { 
        if(a[k] == x)
        {
            return k+1;
        }
    }
    return -1;
}

int main()
{
    int a[n],k,ele;
    for(k=0;k<n;k++)
    {
        a[k]=rand()%100+1;
    }

    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }

    printf("\n Enter Search Element: ");
    scanf("%d",&ele);

    int v = linearsearch(a,ele);
    if(v == -1)
    {
        printf("Element Is Not Found");
    }
    else
    {
        printf("Search Element Is Found At %d Position",v);
    }
}