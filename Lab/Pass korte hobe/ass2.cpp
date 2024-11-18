// Ass#2.1


#include<iostream>
using namespace std;
class array
{
    int a[10], i, n, j, temp;
    public:
    void input()
    {
        cout<<"enter number of element in array"<<endl;
        cin>>n;
        cout<<"Enter array elements"<<endl;
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
    }
    void sortelement()
    {
        for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j] < a[i]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }   
    void print()
    {
        cout<<"Sorted Array is="<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
        
    }
};
int main()
{
    array y;
    y.input();
    y.sortelement();
    y.print();
    return 0;
}


// Ass#2.2


#include<iostream>
using namespace std;
class books 
{
  int isbn;  
  char title [30];
  float price;
  public:
     void getdata ()
     {
        cout<<"Title:";
        cin>>title;
        cout<<"ISBN:";
        cin>>isbn;
        cout<<"Price:";
        cin>>price;
     }
     void putdata ()
     {
        cout<<"Title:"<<title<< "\n";
        cout<<"ISBN:"<<isbn<< "\n";
        cout<<"Price:"<<price<< "\n"; 
     }
};
int main() 
{
    books book[3];
    int n=3;
    cout<<"Enter the book details\n";
    for(int i=0;i<n;i++) 
    {
        cout<<"Enter details of book "<<(i+1)<<"\n";
        book[i].getdata();
    }
    for(int i=0;i<n;i++) 
    {
        cout<<"\nBook "<<(i+1)<<"\n";
        book[i].putdata() ;
    } 
    return 0;
}


// Ass#2.3


#include <iostream>  
using namespace std;  
class Employee 
{  
   public:  
       int id;     
       string name;  
       float salary;  
       void insert(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main() 
{  
    Employee e1;  
    Employee e2; 
    e1.insert(201, "Manab Das", 25000);    
    e2.insert(202, "Saikat mondal", 29000);    
    e1.display();    
    e2.display();    
    return 0;  
}


// Ass#2.4


#include<iostream>
using namespace std;
class item 
{
  char name [30];
  int code, qty;
  float price ;
  public:
     void getdata ()
     {
        cout<<"Enter Name of Item:";
        cin>>name;
        cout<<"Enter Item Code:";
        cin>>code;
        cout<<"Enter Item Price:";
        cin>>price;
        cout<<"Enter Quantity of Item:";
        cin>>qty;
     }
     void putdata ()
     {
        cout<<"Item Name:"<<name<< "\n";
        cout<<"Item Code:"<<code<< "\n";
        cout<<"Item Price:"<<price<< "\n";
        cout<<"Qty of Item:"<<qty<< "\n"; 
     }
};
int main() 
{
    cout<<"Enter details of 2 items:\n";
    item product[2] ;
    int n=2;
    for(int i=0;i<n;i++) 
    {
        cout<<"Enter details of Item "<<(i+1)<<"\n";
        product[i].getdata();
    }
   for(int i=0;i<n;i++) 
   {
     cout<<"\nItem "<<(i+1)<<"\n";
     product[i].putdata();
    } 
    return 0;
}


// Ass#2.5


#include<iostream>
using namespace std;
class array
{
    int a[10]={7, 5, 4, 8, 9, 11, -5, 0, 2, 1}, max, min, i, n;
    public:
    void maximum()
    {
        max=a[0];
        for(i=1;i<10;i++)
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
        for(i=1;i<10;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    }
    void print()
    {
        cout<<"Maximum no is = "<<max<<endl;
        cout<<"Minimum no is = "<<min;
    }
};
int main()
{
    array y;
    cout<<"\nThe array elements are 7, 5, 4, 8, 9, 11, -5, 0, 2, 1\n";
    y.maximum();
    y.minimum();
    y.print();
    return 0;
}