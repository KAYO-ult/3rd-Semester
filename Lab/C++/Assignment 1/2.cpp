#include <iostream>
using namespace std;

class Array {
private:
    int temp;
public:
    int Max(int arr[], int n) {
        temp = arr[0];
        for (int i = 1; i < n; i++) {
            if (temp < arr[i]) {
                temp = arr[i];
            }
        }
        return temp;
    }
    int Min(int arr[], int n) {
        temp = arr[0];
        for (int i = 0; i < n; i++) {
            if (temp > arr[i]) {
                temp = arr[i];
            }
        }
        return temp;
    }
};

int main(){
    Array find;
    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Maximum element is: " << find.Max(arr, n) << "\n";
    cout << "Minimum element is: " << find.Min(arr, n);
    return 0;
}


//Using Void

// #include <iostream>
// using namespace std;

// class Array {
// private:
//     int temp;
// public:
//     void Max(int arr[], int n) {
//         temp = arr[0];
//         for (int i = 1; i < n; i++) {
//             if (temp < arr[i]) {
//                 temp = arr[i];
//             }
//         }
//         cout << "Maximum element is: " << temp << "\n";
//     }
//     void Min(int arr[], int n) {
//         temp = arr[0];
//         for (int i = 0; i < n; i++) {
//             if (temp > arr[i]) {
//                 temp = arr[i];
//             }
//         }
//         cout << "Minimum element is: " << temp;
//     }
// };

// int main(){
//     Array find;
//     int n;
//     cout << "Enter The Array Size: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     find.Max(arr, n);
//     find.Min(arr, n);
//     return 0;
// }