// #include<iostream>
// using namespace std;

// class Factorial {
// private:
//     /* data */
// public:
//     int Fact(int n) {
//         int fact = 1; 
//         for (int i=2;i<=n;i++){
//             fact*=i;
//         }
//         return fact;
//     }
// };

// int main() {
//     Factorial num;
//     cout << "Enter The Number = ";
//     int n;
//     cin >> n;
//     cout << "The Factorial Of given Number is = " << num.Fact(n);
//     return 0;
// }




// Use void function

#include<iostream>
using namespace std;

class Factorial {
private:
    int n, i;
public:
    void Fact() {
        int fact = 1;
        cout << "Enter The Number = ";
        cin >> n;
        for (i=2;i<=n;i++){
            fact*=i;
        }
        cout << "The Factorial Of given Number is = " << fact << endl;
    }
};

int main(){
    Factorial num;
    // cout << "Enter The Number = ";
    // int n;
    // cin >> n;
    num.Fact();
    return 0;
}