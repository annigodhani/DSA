#include <stdio.h>
#include <stdlib.h>
#define v 17

int swapp;
void bubblesort(int a[], int x)
{
  for (int k = 0; k < v; k++)
  {
    for (int l = 0; l < v - 1; l++)
    {
      if (a[l] > a[l + 1])
      {
        int swapp = a[l];
        a[l] = a[l + 1];
        a[l + 1] = swapp;
      }
    }
  }
}

int main()
{
  int a[v], y;
  for (y = 0; y < v; y++)
  {
    a[y] = rand() % 100 + 1;
  }
  printf("Original array: ");
  for (y = 0; y < v; y++)
  {
    printf("%d ", a[y]);
  }

  bubblesort(a, v);
  printf("\nSorted array: ");
  for (y = 0; y < v; y++)
  {
    printf("%d ", a[y]);
  }

  return 0;
}
