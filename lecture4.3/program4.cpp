#include<iostream> 
using namespace std;
int main(){
    int choice;
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice){
         case 1:
        cout<<"you successfully of internet recharge";
        break;
        case 2:
        cout<<"you successfully top up of recharge";
        break;
        case 3:
        cout<<"you successfully special recharge";
    }
    return 0;
}