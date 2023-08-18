#include<stdio.h>
#define n 5
int a[n];
int top = -1,k;
int Display()
{
 if(top<0)
 printf("Array is Empty....");
 else
 {
   for(k=0;k<=top;k++)
   {
    printf("%d ",a[k]);
   }
 }
}
int insertend(int val)
{
 if(top>=n-1)
 printf("Array is Full\n");
 else 
 {
    top++;
    a[top] = val;
    
 }
}
int main()
{
insertend(100);
insertend(200);
insertend(300);
insertend(400);
insertend(500);
insertend(600);
Display();
}