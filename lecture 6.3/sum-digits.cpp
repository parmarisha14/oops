#include<iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"enter the digits: ";
    cin>>num;
    while(num>0){
        int last_digit=num%10;
        num=num/10;
        sum=sum+last_digit;

    }
    cout<<"Sum of all digits: "<<sum;
    return 0;
}