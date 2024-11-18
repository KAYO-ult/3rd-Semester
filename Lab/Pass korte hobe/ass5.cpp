Ass#5.1


#include <iostream>  
using namespace std;  
class B; 
class A  
{  
    float x;  
    public:  
        void fun(float i)  
        {  
            x=i;  
        }  
        friend void min(A, B);
};  
class B  
{  
    float y;  
    public:  
        void magic(float i)  
        {  
            y=i;  
        }  
        friend void min(A, B);  
};  
void min(A obj1,B obj2)  
{  
    if(obj1.x<=obj2.y)  
        cout <<"Data member of magic is greater"<< endl;  
    else  
        cout <<"Data member of fun is greater"<< endl;  
}  
int main()  
{  
   A obj1;  
   B obj2;  
   obj1.fun(10.25);  
   obj2.magic(11.10);  
   min(obj1,obj2);  
   return 0;  
 }


Ass#5.2


#include<iostream>
using namespace std;
class class2;
class class1
{
    int value1;
    public:
        void input(int a)
        {
            value1=a;
        }
        void display()
        {
            cout<<value1<<"\n";
        }
        friend void exchange(class1 &,class2 &);
};
class class2
{
    int value2;
    public:
        void input(int a)
        {
            value2=a;
        }
        void display()
        {
            cout<<value2<<"\n";
        }
        friend void exchange(class1 &,class2 &);
};
void exchange(class1 & c1,class2 & c2)
{
    c1.value1=c1.value1+c2.value2;//value1=100+200=300
    c2.value2=c1.value1-c2.value2;//value2=300-200=100
    c1.value1=c1.value1-c2.value2;//value1=300-100=200
}
int main()
{
    class1 c1;
    class2 c2;
    c1.input(100);
    c2.input(200);
    cout<<"Value before exchange a and b: "<<"\n";
    c1.display();
    c2.display();
    exchange(c1,c2);
    cout<<"Value after exchange"<<"\n";
    c1.display();
    c2.display();
    return 0;   
}


Ass#5.3


#include <iostream>
using namespace std;
class ClassB;                 
class ClassA 
{
    int basic1;
    public:
        void numA(int i)
        {
            basic1=i;
        }
        friend int add(ClassA , ClassB );
};
class ClassB 
{
    int basic2;
    public:
        void numB(int i)
        {
        basic2=i;
        }
        friend int add(ClassA , ClassB );
};
int add(ClassA obj1, ClassB obj2) 
{
    double total1, total2, t1, t2;
    t1=obj1.basic1+obj1.basic1*0.6+obj1.basic1*0.3;
    total1=t1-t1*0.12;
    t2=obj2.basic2+obj2.basic2*0.4+obj2.basic2*0.2;
    total2=t2-t2*0.12;
    return (total1+total2);
}
int main() 
{
    ClassA obj1;
    ClassB obj2;
    obj1.numA(25000);
    obj2.numB(20000);
    cout<<"Total salary of both Employee: "<< add(obj1, obj2);
    return 0;
}