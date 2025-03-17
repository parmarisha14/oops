#include<iostream>
using namespace std;
int main(){
    int num,count=1;
    cout<<"Enter your name:";
    cin>>num;
    while(num>=10){
        num=num/10;
        count++;
    }cout<<"Total number of digit: "<<count;
    return 0;
}