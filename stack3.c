#include <stdio.h>
#define n 5
int a[n];
int top = -1,k;
int display()
{
  if (top < 0)
  {
    printf("Array is empty .....");
  }
  else
  {
    for (k=0;k<=top;k++)
    {
      printf("%d ",a[k]);
    }
  }
}

int firstInsert(int value)
{
  if (top>=n-1)
  {
    printf("Array is full\n:");
    
  }
  else
  {
    for (int v=top;v>=0;v--)
    {
      a[v + 1] = a[v];
    }
    a[0] = value;
    top++;
    
  }
}

int firstDelete()
{
  int x;
  if (top < 0)
  {
    printf("Array is already empty\n :");
   
  }
  else
  {
    x = a[0];
    for (int k=0;k<top;k++)
    {
      a[k] = a[k + 1];
    }
    top--;
    return x;
  }
}

int delete()
{
  int x;
  if (top < 0)
  {
    printf("Array is already empty\n :");
  }
  else
  {
    x = a[top];
    top--;
    return x;
  }
}

int main()
{
  int ch;
  firstInsert(100);
  firstInsert(200);
  firstInsert(300);
  firstInsert(400);
  firstInsert(500);
  display();
  
  firstDelete();
  firstDelete();
  display();
}