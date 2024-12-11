#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) { // Function to add two integers
        cout << "\nEnter two integers: ";
        cin >> a >> b;
        return a + b;
    }

    double add(double a, double b) { // Function to add two doubles
        cout << "\nEnter two doubles: ";
        cin >> a >> b;
        return a + b;
    }

    int add(int a, int b, int c) { // Function to add three integers
        cout << "\nEnter three integers: ";
        cin >> a >> b >> c;
        return a + b + c;
    }
};

int main() {
    Math math;
    int a, b, c;
    double x, y;

    // Calling the first add function
    cout << "Sum of two integers: " << math.add(a, b) << endl;

    // Calling the second add function
    cout << "Sum of two doubles: " << math.add(x, y) << endl;

    // Calling the third add function
    cout << "Sum of three integers: " << math.add(a, b, c) << endl;

    return 0;
}
