// Take Nothing Return Something
#include<iostream>
using namespace std;
int add(){
    int a=30,b=3;
    return a+b;
}
int sub(){
    int a=30,b=3;
    return a-b;
}
int mul(){
    int a=30,b=5;
    return a*b;
}
int div(){
    int a=30,b=5;
    return a/b;
}
int mod(){
    int a=30,b=5;
    return a%b;
}
int main(){
    cout<<"Addition is "<<add()<<endl;
    cout<<"Subtraction is "<<sub()<<endl;
    cout<<"Multiplication is "<<mul()<<endl;
    cout<<"Division is "<<div()<<endl;
    cout<<"modules is "<<mod()<<endl;
    return 0;
}