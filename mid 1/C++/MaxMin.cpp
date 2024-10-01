// #include <iostream>
// using namespace std;

// class MinMax {
//     public:
//         int n, array[10];

//         void getArray() {
//             for (int i = 0; i <= n; i++) {

//             }
//         }
// };


#include <iostream>
using namespace std;

class MaxMin {
private:
    int arr[10];
    int size;

public:
    void inputArray() {
        cout << "Enter the size of the array = ";
        cin >> size;
        
        for (int i = 0; i < size; i++) {
            cout << "Enter the element " << i + 1 << " of the array = ";
            cin >> arr[i];
        }
    }

    void findMaxMin() {
        int max = arr[0];
        int min = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        cout << "Maximum value in the array = " << max << endl;
        cout << "Minimum value in the array = " << min << endl;
    }
};

int main() {
    MaxMin obj;
    obj.inputArray();
    obj.findMaxMin();
    return 0;
}