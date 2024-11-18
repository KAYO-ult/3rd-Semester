// Ass#1.1


#include<iostream>
using namespace std;
class factorial
{
	public:
	int fact=1, num;
	void in_fa()
	{
	    cout<<"Please enter a number: ";
	    cin>>num;
	    for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
	}
	void display()
	{
	   	cout<<"Factorial of entered number is: "<<fact;
	}
};
int main()
{
	factorial object;
	object.in_fa();
	object.display();
	return 0;
}


// Ass#1.2


#include<iostream>
using namespace std;
class array
{
    private:
    int a[10],max,min,i,n;
    public:
    void input()
    {
        cout<<"enter number of element in array"<<endl;
        cin>>n;
        cout<<"Enter array elements"<<endl;
        for(i=1;i<=n;i++)
        {
        cin>>a[i];
        }
    }
    void maximum()
    {
        max=a[0];
        for(i=1;i<=n;i++)
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
        for(i=1;i<=n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    }
    void print()
    {
        cout<<"Maximum no is= "<<max<<endl;
        cout<<"Minimum no is= "<<min;
    }
};
int main()
{
    array y;
    y.input();
    y.maximum();
    y.minimum();
    y.print();
    return 0;
}


// Ass#1.3


#include<iostream>
using namespace std;
class vehicle 
{   
    int m, p, c;  
    public:  
        void para()
        {
            cout<<"Enter the model no.:\n";
            cin>>m;
            cout<<"Enter the price:\n";
            cin>>p;
            cout<<"Enter the seat capacity:\n";
            cin>>c;
        }
        void dis()
        {
            cout<<"Model no.:"<<m<<"\n";
            cout<<"Price:"<<p<<"\n";
            cout<<"Seat capacity:"<<c<<"\n";
        }
};

int main() 
{
  vehicle bus;
  vehicle car;
  
  cout<<"Details of bus:\n";
  bus.para();
  cout<<"It is a public vehicle:\n";
  bus.dis();
  cout<<"\n\nDetails of car:\n";
  car.para();
  cout<<"It is a private vehicle:\n";
  car.dis();
  return 0;
}


// Ass#1.4


#include<iostream>
using namespace std;
class searchelement
{
 public:
 int arr[10]={7, 5, 4, 8, 9, 11, 3, 0, 2, 1}, i, num, index, n;
 void search()
    {
    cout<<"\nThe array elements are 7, 5, 4, 8, 9, 11, 3, 0, 2, 1";
    cout<<"\nEnter a number to search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    }
    void display()
    {
    cout<<"\nFound at Index No."<<index+1;
    cout<<endl;
    }
};
int main()
{
    searchelement ob1;
    ob1.search();
    ob1.display();
    return 0;
}


// Ass#1.5


#include<iostream>
using namespace std;
class array
{
    int a[7]={10,19,27,30,35,67,80}, start, tgt, end, mid, i, n;
    public:
    void search()
    {
        start = 0;  
        end = 6;      
        cout <<"Array elements are 10, 19, 27, 30, 35, 67, 80\n";
        cout <<"Enter Search Item: " << endl;  
        cin >> tgt;  
        while (start <= end)  
        {  
            mid = ( start + end ) / 2;   
            if (a[mid] == tgt)  
            {  
                cout << "Element is found at index " << (mid + 1)<<endl;  
                exit(0);
            }  
            else if( tgt > a[mid])  
            {  
                start = mid + 1; 
            }  
            else if( tgt < a[mid])  
            {  
                end = mid - 1; 
            }  
        }  
    }
};
int main()
{
    array obj;
    obj.search();
    return 0;
}