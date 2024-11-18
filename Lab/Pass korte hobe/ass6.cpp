Ass#6.1


#include<iostream>
using namespace std;
class Car 
{       
    string brand, model;
    int year;
    float price;
    public:
        Car(string x, string y, int z,float p)
        {
            brand = x;
            model = y;
            year = z;
            price=p;
        }
        void display()
        {
            cout <<brand<<"\t\t"<<model<<"\t\t"<<year<<"\t\t"<<price<<endl;
        }
};
int main() 
{
    Car obj[3]={Car("BMW", "X500", 1999, 250000), Car("Ford", "M230", 1969, 340000), Car("TATA", "A502", 1998, 270000)};
    cout<<"Brand\t\tModel\t\tYear\t\tPrice"<<endl;
    for (int i=0;i<3;i++)
    {
        obj[i].display();  
    }
    return 0;
}


Ass#6.2


#include <iostream>
using namespace std;
class FactorialCopy 
{
    int fact, num, i;
    public:
        FactorialCopy(int n) 
        {
            num = n;
            fact = 1;
        }
        FactorialCopy(FactorialCopy &z) 
        {
            num = z.num;
            fact = 1;
        }
        void calculate() 
        {
            for (int i = 1; i <= num; i++)
            fact = fact * i;
        }
        void display()
        { 
            cout << "Factorial of " << num << " is " << fact << endl; 
        }
};
int main() 
{
    int num;
    cout << "Enter the number to find factorial:\t";
    cin >> num;
    cout << "Printing from Constructor:" << endl;
    FactorialCopy f(num);
    f.calculate();
    f.display();
    cout << "Printing from Copy Constructor:" << endl;
    FactorialCopy factCopy(f);
    factCopy.calculate();
    factCopy.display();
    return 0;
}


Ass#6.3


#include <iostream>
using namespace std;
class Rect
{
    int calculation;
    public:
    Rect(int r)
    {
        calculation = 3.14*r*r;
    }
    Rect(double p,int r)
    {
        calculation = 2*p*r;
    }
    Rect(int m, int n)
    {
        calculation = m * n;
    }
    Rect(int a, int b,int c)
    {
        calculation=a*b*c;
    }
    void display1()
    {
        cout << "The area of circle is: " << calculation << endl;
    }
    void display2()
    {
        cout << "The perimeter of circle is: " << calculation << endl;
    }
    void display3()
    {
        cout << "The area of rectangle is: " << calculation << endl;
    }
    void display4()
    {
        cout << "The volume of rectangle is: " << calculation<< endl;
    }
};
int main()
{
    Rect r1(7);
    Rect r2(3.14, 7);
    Rect r3(2, 6);
    Rect r4(2, 4, 5);
    r1.display1();
    r2.display2();
    r3.display3();
    r4.display4();
    return 0;
}


Ass#6.4


#include<iostream>
using namespace std;
class abc
{
    public:
    int search(int intArray[])
    {
        int num1;
        cout << "Enter a number to serach from int Array\n";
        cin >> num1;
        for(int i = 0; i < 10; i++)
        {
            if(intArray[i] == num1)
            {
            return i+1;
            break;
            }
        }
        cout<<"data not found";
        return 0;
    }
    float search(float floatArray[])
    {
        float num2;
        cout << "Enter a number to serach from float Array\n";
        cin >> num2;
        for(int j = 0; j < 10; j++)
        {
            if(floatArray[j] == num2)
            {
                return j+1;
                break;
            }
        }
        cout<<"data not found";
        return 0;
}
};
int main()
{
    abc a;
    cout << "Integer Array elements are 2, 5, 4, 3, 7, -9, 10, 12, 45, 17\n";
    cout << "Float Array elements are 12.4, 2.1, 5.4, 4.6, 1.4, 4.2, 5.4, 6.9, 9.8, 9.7\n";
    int intArray[]={2, 5, 4, 3, 7, -9, 10, 12, 45, 17};
    float floatArray[]={12.4, 2.1, 5.4, 4.6, 1.4, 4.2, 5.4, 6.9, 9.8, 9.7};
    cout<<(a.search(intArray))<<"\n";
    cout<<(a.search(floatArray))<<"\n";  
    return 0;
}