#include<iostream>
using namespace std;
int main(){
    int last,first,num,sum=0;
    cout<<"enter any number:";
    cin>>num;
    last=num%10;
    while(num>=10){
        num=num/10;
    }
    first=num;
    sum=first+last;
    cout<<"The sum of first and last digit: "<<sum;
    return 0;
}