#include<iostream>
using namespace std;
int main()
{
    
    int rollno,eco,ba,account,total,avg;
    char name[20];
    cout<<"Enter the rollno: ";
    cin>>rollno;

    cout<<"Enter the name: ";
    cin>>name;

    cout<<"Enter the eco: ";
    cin>>eco;

    cout<<"Enter the ba: ";
    cin>>ba;
    
    cout<<"Enter the account: ";
    cin>>account;

    total=eco+ba+account;
    avg=total/3;

    cout<<endl;
    cout<<"student information"<<endl;

    cout<<"Roll no: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Eco: "<<eco<<endl;
    cout<<"Ba: "<<ba<<endl;
    cout<<"Account: "<<account<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"avg: "<<avg<<endl;

    if(eco>=35 && ba>=35 && account>=35 )
    {
        cout<<"The students is pass"<<endl;

        if(avg>=80 ){
            cout<<"Grade A"<<endl;
        }   
        else if(avg>=60)
        {
        cout<<"Grade B";
        }

        else if(avg>=50)
        {
            cout<<"Grade C";
        
        }
        else
        {
            cout<<"pass out";
       
         }
    }
    else
    {
        cout<<"The students is faill"<<endl;
    }
    
   return 0;
}