#include <stdio.h>
int main() 
{
    int size1, size2;
   
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
	int array1[size1];
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) 
	{
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

	int array2[size2];

    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) 
	{
        scanf("%d", &array2[i]);
    }

    int mergedArray[size1 + size2];

    for (int i = 0; i < size1; i++) 
	{
        mergedArray[i] = array1[i];
    }

    for (int i = 0; i < size2; i++) 
	{
        mergedArray[size1 + i] = array2[i];
    }

    printf("Merged Array:\n");
    for (int i = 0; i < size1 + size2; i++)
	{
        printf("%d ", mergedArray[i]);
    }

    return 0;
}