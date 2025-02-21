// Function to Swap Two Numbers (Call by Value)
#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swap:a= "<<a<<" b= "<<b<<endl;
}
int main(){
    int x=5,y=10;
    swap(x,y);
    cout<<"Original value:x= "<<x<<" y= "<<y<<endl;
    return 0;
}