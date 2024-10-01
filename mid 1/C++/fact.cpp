#include <iostream>
using namespace std;

class Factorial {
    // private:
    //     int n;

    public:
        void factorial() {
            int n, fact = 1, i;
            cout << "Enter a number to find its factorial = ";
            cin >> n;
            for (i = 1; i <= n; i++)
                fact *= i;
                cout << "Factorial of " << n << " = " << fact << endl;
        }
};

int main() {
    Factorial obj, obj2;

    // int n;
    // cout << "Enter a number = ";
    // cin >> n;
    obj.factorial();
    obj2.factorial();

    return 0;
}

