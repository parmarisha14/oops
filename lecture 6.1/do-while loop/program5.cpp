#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
          if(i%2==0){
            cout<<"the number is even "<<i<<endl;
        }
        else{
             cout<<"the number is odd "<<i<<endl;
        }
       i++;
    }
    while(i<=10);
    return 0;
} 