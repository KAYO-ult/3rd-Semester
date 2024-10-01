#include<iostream>
using namespace std;

class Array{
    private:
        int i;
    public:
        void arrinput(int arr[],int n){
            for(i=0;i<n;i++){
                cout<<"Element "<<i+1<<": ";
                cin>>arr[i];
            }
        }
        int search(int arr[],int n,int ch){
            for(i=0;i<n;i++){
                if(ch==arr[i]){
                    return i+1;
                }
            }
            return -1;
        }
};

int main(){
    Array Search;
    int n;
    int Ch;
    int found;
    cout<<"Enter the Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements: "<<endl;
    Search.arrinput(arr,n);
    cout<<"Enter the Element To Search: ";
    cin>>Ch;
    found=Search.search(arr,n,Ch);
    if (found != -1) {
        cout << "Element found at index: " << found << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}