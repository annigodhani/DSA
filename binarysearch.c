#include <stdio.h>

int binarysearch(int a[], int l, int h, int m)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;
        if (a[mid == m])
        {
            return mid + 1;
        }
        if (a[mid] > m)
        {
            return binarysearch(a, l, mid - 1, m);
        }
        return binarysearch(a, h, mid - 1, m);
    }
    return -1;
}
int main()
{
    int n, m, result;
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    n = sizeof(a); // sizeof(a[0]);
    m = 30;
    result = binarysearch(a, 0, n - 1, m);

    if (result == -1)
    {
        printf("Elament is not found ");
    }
    else
    {
        printf("Search element is found at %d position", result);
    }
}