#include <stdio.h>
#include <stdlib.h>

void Merge(int a[], int l, int mid, int h)
{
    int r[100];
    int i = l, j = mid+1, k = l;

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            {
            r[k++] = a[i++];
        }
        else
            {
            r[k++] = a[j++];
         }
    }

    while (i <= mid)
        r[k++] = a[i++];

    while (j <= h)
        r[k++] = a[j++];

    for (i = l; i <= h; i++)
        a[i] = r[i];
}
void MergeSort(int a[], int l, int h)
{
    
    int mid;

    if (l < h)
    {
        mid = (l + h) / 2;

        MergeSort(a, l, mid);

        MergeSort(a, mid + 1, h);

        Merge(a, l, mid, h);
    }
}

int BinarySearch(int arr[], int l, int h, int t)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == t)
            return mid;

        if (arr[mid] < t)
            return BinarySearch(arr, mid + 1, h, t);

        return BinarySearch(arr, l, mid - 1, t);
    }

    return -1; 
}

int main()
{
    int a[17], n = 17, i;

    for (i = 0; i < n; i++)
        a[i] = (rand() % 99) + 1;

    printf("Unsorted Array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    MergeSort(a, 0, n - 1);

    printf("\nSorted Array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    int t = 2; 

    int r = BinarySearch(a, 0, n - 1, t);

    if (r != -1)
        printf("\nElement %d found index %d\n", t, r);
    else
        printf("\nElement not found\n");

    return 0;
}