#include<iostream>
using namespace std;
class books 
{
  char title [30];
  float price ;
  public:
     void getdata ();
     void putdata ();
} ;
void books :: getdata () 
{
   cout<<"Title:";
   cin>>title;
   cout<<"Price:";
   cin>>price;
}
void books :: putdata () 
{
   cout<<"Title:"<<title<< "\n";
   cout<<"Price:"<<price<< "\n";
}
int main() 
{
  
  books book[100] ;
  int n;
  cout<<"Enter the number of books you want to add: ";
  cin>>n;
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
