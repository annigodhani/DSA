#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int Display() 
{

  for (int k=0;k<=top;k++) 
  {
    printf("%d ", a[k]);
  }
  printf("\n");
}
int insert(int val) 
{
  if (top >= n - 1) 
  {
    printf("Array is full\n");
  }
  else 
  {
    top++;
    a[top] = val;
  }
}
int delete()
{
  if (top < 0) 
  {
    printf("Array is empty\n");
  } 
  else 
  {
    int x = a[top];
    top--;
    return x;
  }
}

int main() 
{
  insert(100);
  insert(200); 
  insert(300); 
  insert(400); 
  insert(500); 
 
  Display();

    delete(); 
    delete();
    //delete();
  Display();

  return 0;
}
