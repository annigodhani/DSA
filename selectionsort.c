#include<stdio.h>
#include<stdlib.h>
#define v 17

int swapp;
void selectionsort(int a[],int x)
{
  for(int k=0;k<v;k++)
{
  for(int l=k+1;l<v;l++) 
{
 if(a[l] < a[k])
 {
   int swapp = a[k];
   a[k] = a[l];
   a[l] = swapp;
   }
  }
 }
}

int main()
{
 int a[v],y;
  for(y=0;y<v;y++)
  {
    a[y] = rand()%100+1;
  }
  printf("Original array: ");
    for (y=0;y<v;y++) 
    {
        printf("%d ",a[y]);
    }

   selectionsort(a,v);
    printf("\nSorted array: ");
    for (y=0;y<v;y++) 
    {
      printf("%d ",a[y]);
    }

    return 0;
}






