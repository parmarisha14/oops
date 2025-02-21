#include<iostream>
using namespace std;
int  add(int a, int b){
   
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
    int choice;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Modules"<<endl;
    cout<<"Enter the choice:";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Addition is "<<add(40,4);
        break;

        case 2:
        cout<<"Subtraction is "<<sub(40,4);
        break;

        case 3:
        cout<<"Multiplication is "<<mul(40,4);
        break;

        case 4:
        cout<<"Division is "<<divi(40,4);
        break;

        case 5:
        cout<<"Modules is "<<mod(40,4);
        break;
    }
    return 0;
}