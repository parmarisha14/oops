#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    cout<<"enter third number: ";
    cin>>num3;
    if(num1>=num2 &&num1>=num2){
        cout<<"the first number is maximum";
    }
    else if(num2>=num3)
    {
        cout<<"the second number is maximum";
    }
    else
    {
        cout<<"the third number is maximum";
    }
}