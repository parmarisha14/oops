// Function to Check Even or Odd
#include<iostream>
using namespace std;
void checkEvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
}
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    checkEvenOdd(num);
    return 0;
}