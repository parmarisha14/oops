#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
       
        if(i%2==0){
            cout<<"the number is even "<<i<<endl;
        }
        else{
             cout<<"the number is odd "<<i<<endl;
        }
       i++;
    }
    return 0;
} 