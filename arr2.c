#include<stdio.h>
int main()
{
    int n[20];
    printf("Enter the number of: ");
    int numbers;
    scanf("%d\t",&numbers);

    printf("enter %d number:",numbers);
    for (int i=0; i<numbers; i++) 
    {
        scanf("%d", &n[i]);
    }

    int temp = n[0]; 
    for (int i=0; i<numbers-1; i++) 
    {
        n[i] = n[i + 1]; 
    }
    n[numbers-1] = temp; 

    printf("Output: ");
    for (int i=0; i<numbers; i++) 
    {
        printf("%d ", n[i]);
    }
return 0;
}