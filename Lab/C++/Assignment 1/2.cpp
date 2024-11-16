#include<iostream>
using namespace std;
class array {
    private:
    int a[10],max,min,i,n;
    public:
    void input()
    {
        cout<<"Enter number of element in array = ";
        cin>>n;
        cout<<"Enter array elements = ";
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
    }
    void maximum()
    {
        max=a[0];
        for(i=1;i<n;i++)
        {
        
        if(a[i]>max)
        {
            max=a[i];
        }
       }
    }
    void minimum()
    {
        min=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    }
    void print()
    {
        cout<<"Array is   = ";
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<a[i];
        }
        cout<<endl;
        cout<<"Maximum no is = "<<max<<endl;
        cout<<"Minimum no is = "<<min;
    }
};
int main()
{
    array obj;
    obj.input();
    obj.maximum();
    obj.minimum();
    obj.print();
    
    return 0;
}





// //NOT Using Void

// #include <iostream>
// using namespace std;

// class Array {
// private:
//     int temp;
// public:
//     int Max(int arr[], int n) {
//         temp = arr[0];
//         for (int i = 1; i < n; i++) {
//             if (temp < arr[i]) {
//                 temp = arr[i];
//             }
//         }
//         return temp;
//     }
//     int Min(int arr[], int n) {
//         temp = arr[0];
//         for (int i = 0; i < n; i++) {
//             if (temp > arr[i]) {
//                 temp = arr[i];
//             }
//         }
//         return temp;
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
//     cout << "Maximum element is: " << find.Max(arr, n) << "\n";
//     cout << "Minimum element is: " << find.Min(arr, n);
//     return 0;
// }