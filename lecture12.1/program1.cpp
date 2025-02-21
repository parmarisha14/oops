// Take Nothing Return Something
#include<iostream>
using namespace std;
void add(){
    int a=10,b=5;
    cout<<"addition is "<<a+b<<endl;
}
void sub(){
    int a=10,b=5;
    cout<<"subtraction is "<<a-b<<endl;
}
void mul(){
    int a=10,b=5;
    cout<<"multiplication is "<<a*b<<endl;
}
void div(){
    int a=10,b=5;
    cout<<"division is "<<a/b<<endl;
}
void mod(){
    int a=10,b=5;
    cout<<"modules is "<<a%b<<endl;
}
int main(){
    add();
    sub();
    mul();
    div();
    mod();
    return 0;
}