Ass#4.1


#include<iostream>
using namespace std;
class checkstatus
{
    char name[20];
    int NoOfInn, NotOutInnm, Totalrun, TotalWkt;
    float Battingavg;
    public:
        void input()
        {
            cout<<"Enter the name:"<<endl;
            cin>>name;
            cout<<"Enter the No_Of_Inn:"<<endl;
            cin>>NoOfInn;
            cout<<"Enter the Not_Out_Innm:"<<endl;
            cin>>NotOutInnm;
            cout<<"Enter Total run:"<<endl;
            cin>>Totalrun;
            cout<<"Enter Total_Wkt:"<<endl;
            cin>>TotalWkt;
            Battingavg=Totalrun/(NoOfInn - NotOutInnm);
        }
        void switchcase()
        {
            if((NoOfInn>=50 && Battingavg>35)&&(NoOfInn>=50 && TotalWkt>49))
                cout<<"He is a all rounder"<<endl;
            else if(NoOfInn>=50 && Battingavg>35)
                cout<<"He is a good batsman"<<endl;
            else if(NoOfInn>=50 && TotalWkt>49)
                cout<<"He is a good bowler"<<endl;
            else
                cout<<"nottt";
        }
};
int main()
{
    checkstatus ob;
    ob.input();
    ob.switchcase();
    return 0;
}


Ass#4.2


#include<iostream>
using namespace std;
class employee
{
    public:
    int id[10], age[10], basic[10], yos[10], n, total[10];
    void getdata()
    {
        cout<<"Enter total number of employee [Max size = 10]:"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++) 
        {
            cout<<"Enter ID of employee:"<<(i+1)<<endl;
            cin>>id[i];
            cout<<"Enter Age of employee:"<<(i+1)<<endl;
            cin>>age[i];
            cout<<"Enter basic salary of employee:"<<(i+1)<<endl;
            cin>>basic[i];
            cout<<"Enter year of service:"<<(i+1)<<endl;
            cin>>yos[i];
            total[i]=basic[i]+basic[i]*0.6+basic[i]*0.1;
        }
    }
    void calculatio()
    {
        for (int i = 0; i < n; i++) 
        {
           if(yos[i]>5)
           total[i]=total[i]+1200;
        }
    }
    void display()
    {
        cout<<"-------DETAILS OF ALL EMPLOYEE--------"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"_"<<endl;
            cout<<"Details of Employee:"<<(i+1)<<endl;
            cout<<"Age is:"<<age[i]<<endl;
            cout<<"Basic salary:"<<basic[i]<<endl;
            cout<<"Total Experience:"<<yos[i]<<endl;
            cout<<"Total salary:"<<total[i]<<endl;
        }
    }
};
int main()
{
    employee s;
    s.getdata();
    s.calculatio();
    s.display();
    return 0;
}


Ass#4.3


#include<iostream>
using namespace std;
class e_bill
{
        int c_no, units;
        char c_name[20];
        double bill;
        public:
            void get()
            {
                 cout<<"Enter Details of Customer Below ::" <<endl;
                 cout<<"Enter Customer No. :: ";
                 cin>>c_no;
                 cout<<"Enter Customer Name :: ";
                 cin>>c_name;
                 cout<<"Enter No. of Units used :: ";
                 cin>>units;
            }
            void put()
            {
                cout<<"------Details of Customer-----" <<endl;
                cout<<"Customer No. is : "<<c_no<<endl;
                cout<<"Customer Name is : "<<c_name<<endl;
                cout<<"Number of Units Consumed : "<<units<<endl;
                cout<<"Total bill pay amount: "<<bill<<endl;
            }
            void calc_bill()
            {
                if(units<=100)
                    bill=units*1.20;
                else if(units<=300)
                    bill=100*1.20+(units-100)*2;
                else
                    bill=100*1.20+200*2+(units-300)*3;
            }
};
int main()
{
    e_bill b1;
    b1.get();
    b1.calc_bill();
    b1.put();
    return 0;
}