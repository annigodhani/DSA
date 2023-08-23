include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         // Last i elements are already in place, so no need to check them
//         for (int j = 0; j < n - i - 1; j++) {
//             // Swap if the element found is greater than the next element
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int numbers[] = {64, 34, 25, 12, 22, 11, 90,17,30,31,92,3};
//     int n = sizeof(numbers) / sizeof(numbers[0]);

//     printf("Original array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", numbers[i]);
//     }

//     bubbleSort(numbers, n);

//     printf("\nSorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", numbers[i]);
//     }

//     return 0;
// }