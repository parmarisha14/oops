#include<iostream>
using namespace std;
int main(){
    int i=10;
    while(i>=1){
       
        if(i%2==0){
            cout<<"the number is even "<<i<<endl;
        }
        else{
             cout<<"the number is odd "<<i<<endl;
        }
       i--;
    }
    return 0;
} 