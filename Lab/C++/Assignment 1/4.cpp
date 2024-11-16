// #include<iostream>
// using namespace std;

// class Array{
//     private:
//         int i;
//     public:
//         void arrinput(int arr[],int n){
//             for(i=0;i<n;i++){
//                 cout<<"Element "<<i+1<<": ";
//                 cin>>arr[i];
//             }
//         }
//         int search(int arr[],int n,int ch){
//             for(i=0;i<n;i++){
//                 if(ch==arr[i]){
//                     return i+1;
//                 }
//             }
//             return -1;
//         }
// };

// int main(){
//     Array Search;
//     int n;
//     int Ch;
//     int found;
//     cout<<"Enter the Array Size: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the Array Elements: "<<endl;
//     Search.arrinput(arr,n);
//     cout<<"Enter the Element To Search: ";
//     cin>>Ch;
//     found=Search.search(arr,n,Ch);
//     if (found != -1) {
//         cout << "Element found at index: " << found << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

class searchelement
{
public:
    int arr[10], i, num, index;

    void inputArray()
    {
        cout << "Enter 10 elements for the array: ";
        for (i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }

    void search()
    {
        cout << "\nThe array elements are: ";
        for (i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\nEnter a Number to Search: ";
        cin >> num;
        index = -1; // Initialize index to -1 to indicate not found
        for (i = 0; i < 10; i++)
        {
            if (arr[i] == num)
            {
                index = i;
                break;
            }
        }
    }

    void display()
    {
        if (index != -1)
        {
            cout << "\nFound at Index No. " << index + 1;
        }
        else
        {
            cout << "\nElement not found in the array.";
        }
        cout << endl;
    }
};

int main()
{
    searchelement ob1;
    ob1.inputArray(); // Get user input for the array
    ob1.search();     // Search for the number
    ob1.display();    // Display the result
    return 0;
}