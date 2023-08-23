// #include <stdio.h>

// int binarySearch(int a[], int size, int x) 
// {
//     for (int k=0;k<size;k++) 
//     {
        
//         if (a[k] == x)
//             return k; 
//         else if (a[k] > x)
//             break; 
//     }

//     return -1;
// }

// int main() {
//     int a[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
//     int size =sizeof(a);
//     int x = 2;

//     int v = binarySearch(a, size,x);

//     if (v != -1)
//         printf("Element found at %d\n",v);
//     else
//         printf("Element not found\n");

//     return 0;
// }


#include <stdio.h>
#define n 10
int binarySearch() 
{
    int a[n], value, low, high;
    if (high >= low) 
    {
      int mid = (high + low)/2;

      if (a[mid] == value)
        return mid;

      if (a[mid] > value)
        return binarySearch();

      return binarySearch();
    }

    return -1;
}

int main(void) 
{
    int array[] = {3, 4, 5, 6, 7, 8, 9}, value;
    int a[] = size_of(array[0]);
    printf("\nEnter value:");
    scanf("%d",&value);
    int result = binarySearch();    
    if (result == -1)
        printf("Not found");

    else
        printf("Element is found at index %d", result);
}