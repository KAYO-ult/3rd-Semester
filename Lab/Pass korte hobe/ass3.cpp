Ass#3.1


#include<iostream>
using namespace std;
class array
{
    int n, temp, sum=0, r, p;
    float q;
    public:
        void input()
        {
            cout<<"enter number a number"<<endl;
            cin>>n;
        }
        void primeno()
        {
            temp=n;    
            while(n>0)    
            {    
                r=n%10;    
                sum=(sum*10)+r;    
                n=n/10;    
            } 
        }
        void print()
        {
            if(temp==sum) 
            {
                p=temp*2;
                cout<<"Number is Palindrome."<<p;
            }
            else
            {
                q=temp/2;
                cout<<"Number is not Palindrome."<<q;  
            }
        }
};
int main()
{
    array y;
    y.input();
    y.primeno();
    y.print();
    return 0;
}


Ass#3.2


#include <iostream>  
using namespace std;  
class student 
{ 
    int roll, marks1, marks2, marks3, sum;     
    string name;  
    float age, avg;
    public:
       void insert()    
        {    
            cout<<"Enter roll of student:"<<endl;
            cin>>roll;
            cout<<"Enter name of student:"<<endl;
            cin>>name; 
            cout<<"Enter age of student:"<<endl;
            cin>>age;
            cout<<"Enter marks of subject-1:"<<endl;
            cin>>marks1;
            cout<<"Enter marks of subject-2:"<<endl;
            cin>>marks2;
            cout<<"Enter marks of subject-3:"<<endl;
            cin>>marks3;
        } 
        void getdata()
        {
            cout<<roll<<"\t\t"<<name<<"\t\t"<<age<<"\t\t"<<marks1<<"\t\t"<<marks2<<"\t\t"<<marks3<<endl;
        }
        void summarks()
        {
            sum=marks1+marks2+marks3;
        }
        void average()
        {
            avg=sum/3;
        }
        void display1()    
        {    
            cout<<sum<<endl;
        }
        void display2()
        {
            cout<<avg<<endl;
        }
};  
int main() 
{  
    student ob[3];
    int sum1;
    for(int i=0;i<3;i++)
    {
        cout << "Details of:" <<(i + 1) << "\n";
        ob[i].insert();
    }
    cout<<"\n\nDetails of students:\t\t\t"<<endl;
    cout<<"ROLL"<<"\t\t"<<"NAME"<<"\t"<<"AGE"<<"\t\t"<<"SUB-1"<<"\t"<<"SUB-2"<<"\t"<<"SUB-3"<<endl;
    cout<<"_"<<endl;
    for(int i=0;i<3;i++)
    {
        ob[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        ob[i].summarks();
    }
    for(int i=0;i<3;i++)
    {
        ob[i].average();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Total marks of student-"<<(i+1)<<" is: ";
        ob[i].display1();
        cout<<"Avg marks of student-"<<(i+1)<<" is: ";
        ob[i].display2();
        cout<<"--------------------------------------"<<endl;
    }
    return 0;  
}


Ass#3.3


#include<iostream>
using namespace std;
class student
{
    int roll[10], age[10], marks1[10], marks2[10], marks3[10], n, total[10];
    char name[20];
    public:
        void getdata()
        {
            cout<<"Enter total number of student [max size = 10]: "<<endl;
            cin>>n;
            for (int i = 0; i < n; i++) 
            {
                cout<<"Enter Roll number of student-"<<(i+1)<<endl;
                cin>>roll[i];
                cout<<"Enter name of student-"<<(i+1)<<endl;
                cin>>name;
                cout<<"Enter Age of student-"<<(i+1)<<endl;
                cin>>age[i];
                cout<<"Enter marks of subject-1 of student:"<<(i+1)<<endl;
                cin>>marks1[i];
                cout<<"Enter marks of subject-2 of student:"<<(i+1)<<endl;
                cin>>marks2[i];
                cout<<"Enter marks of subject-3 of student:"<<(i+1)<<endl;
                cin>>marks3[i];
                total[i]=marks1[i]+marks2[i]+marks3[i];
            }
        }
        int x = 0;
        void calculatio()
        {
            for (int i = 1; i < 3; i++) 
            {
                if (total[i] > total[x])
                x = i;
            }
        }
        void display()
        {
        cout<<"-----Topper of the BCA 3rd semester-----"<<endl;
        cout<<"Highest Marks = "<<total[x]<<endl;
        cout<<"Roll Number of Highest Scorer="<<roll[x]<<endl;
        cout<<"Age of Highest Scorer= "<<age[x]<<endl;
        }
};
int main()
{
    student s;
    s.getdata();
    s.calculatio();
    s.display();
    return 0;
}