#include<iostream>
using namespace std;
int  add(int num1,int num2){
    return num1+num2;
}
int  sub(int num1,int num2){
    return num1-num2;
}
int  mul(int num1,int num2){
    return num1*num2;
}
int divi(int num1,int num2){
    return num1/num2;
}
int mod(int num1,int num2){
    return num1%num2;
}
int main(){
    
    int choice,num1,num2;
    do{
        cout<<"Enter your choice:";
        cin>>choice;

        if(choice==0){
            cout<<"the exit of calcultor"<<endl;
        }
        cout<<"Enter the first number:";
        cin>>num1;
        cout<<"Enter the second number:";
        cin>>num2;
        cout<<"Press 1 for +"<<endl;
        cout<<"Press 2 for -"<<endl;
        cout<<"Press 3 for *"<<endl;
        cout<<"Press 4 for /"<<endl;
        cout<<"Press 5 for %"<<endl;
        cout<<"Press 0 for the exit"<<endl;
        
       
        switch(choice){
            case 1:
                cout<<"Addition of "<<num1<<" add "<<num2<<" is:"<<add(num1,num2)<<endl;
            break;
            case 2:
                cout<<"Subtraction of "<<num1<<" add "<<num2<<" is:"<<sub(num1,num2)<<endl;
            break;
            case 3:
                cout<<"multiplication of "<<num1<<" addd "<<num2<<" is:"<<mul(num1,num2)<<endl;
            break;
            case 4:
                cout<<"Division of "<<num1<<" addd "<<num2<<" is:"<<divi(num1,num2)<<endl;
            break;
            case 5:
                cout<<"Modules  of "<<num1<<" addd "<<num2<<" is:"<<mod(num1,num2)<<endl;
            break;
            default:
                cout<<"Invalid choice"<<endl;
            break;
        }
    }while(choice!=0);
    return 0;
}