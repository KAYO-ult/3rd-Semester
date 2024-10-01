#include <stdio.h>

// Function to input and display an array of 10 elements
void inputAndDisplayArray(int arr[]) {
    printf("Enter 10 elements of the array = ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array elements are = ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int array1[10], array2[10];

    // Call the function for array1
    inputAndDisplayArray(array1);

    // Call the function for array2
    inputAndDisplayArray(array2);

    return 0;
}