#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"enter the third number: ";
    cin>>c;
    a>=b
        ? a>=c
            ?cout<<" first number is maximum"
            :cout<<"third number is maximum"
        : b>=c
                ? cout<<"second number is maximum"
               :  cout<<"third number is maximum";
                return 0;
}
