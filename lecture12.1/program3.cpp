//Take Something Return Something
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main(){
    
    int c=add(25,5);
    cout<<"Addition is: "<<c<<endl;
    cout<<"Subtraction is: "<<sub(25,5)<<endl;
    cout<<"Multiplication is: "<<mul(25,5)<<endl;
    cout<<"Division is: "<<divi(25,5)<<endl;
    cout<<"Modules is: "<<mod(25,5)<<endl;

    return 0;
}