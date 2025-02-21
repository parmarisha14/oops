// Take Something Return Nothing
#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"addition is "<<a+b<<endl;
}
void sub(int a,int b){
    cout<<"subtraction is "<<a-b<<endl;
}
void  mul(int a,int b){
    cout<<"multiplication is "<<a*b<<endl;
}
void divi(int a,int b){
    cout<<"Divison  is "<<a/b<<endl;
}
void mod(int a,int b){
    cout<<"Modules  is "<<a%b<<endl;
}
int main(){
    add(20,2);
    sub(20,2);
    mul(20,2);
    divi(20,2);
    mod(20,2);
    return 0;

}