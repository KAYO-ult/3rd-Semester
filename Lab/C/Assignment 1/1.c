#include <stdio.h>

// Function to input an array of 10 elements
void input() {
    int arr[10];
    printf("Enter 10 elements of the array: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display the elements of the array
void DisplayArray() {
    int arr[10];
    printf("The array elements are: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Call the function for array1
    printf("Array 1\n");
    input();
    DisplayArray();

    // Call the function for array2
    printf("Array 2\n");
    input();
    DisplayArray();

    return 0;
}











// #include <stdio.h>

// // Function to input and display an array of 10 elements
// void inputAndDisplayArray() {
//     int arr[10];
//     printf("Enter 10 elements of the array = ");
//     for(int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array elements are = ");
//     for(int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     //int array1[10], array2[10];

//     // Call the function for array1
//     inputAndDisplayArray();

//     // Call the function for array2
//     inputAndDisplayArray();

//     return 0;
// }