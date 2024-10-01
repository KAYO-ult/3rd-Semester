#include <iostream>
using namespace std;

class BinarySearch {
private:
    int arr[100]; // Assuming a maximum size of 100
    int size;

public:
    // Method to set the array and size
    void setArray(int array[], int s) {
        for (int i = 0; i < s; i++) {
            arr[i] = array[i];
        }
        size = s;
    }

    // Method to perform binary search
    int search(int item, int &minComp, int &maxComp) {
        int left = 0;
        int right = size - 1;
        int mid;
        minComp = 0; // Initialize minComp to 0
        maxComp = 0; // Initialize maxComp to 0
        while (left <= right) {
            mid = left + (right - left) / 2;
            maxComp++; // Increment maxComp
            minComp++; // Increment minComp
            if (arr[mid] == item) {
                return mid + 1; // Return location as 1-based index
            }
            if (arr[mid] < item) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1; // Item not found
    }
};

int main() {
    BinarySearch bs;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100];
    cout << "Enter the array elements in ascending order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bs.setArray(arr, size);
    int searchItem;
    cout << "Enter the item to search: ";
    cin >> searchItem;
    int minComp = 0;
    int maxComp = 0;
    int location = bs.search(searchItem, minComp, maxComp);
    if (location != -1) {
        cout << "Location: " << location << endl;
        cout << "Minimum no. of comparisons required: " << minComp << endl;
        cout << "Maximum no. of comparisons required: " << maxComp << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }
    return 0;
}