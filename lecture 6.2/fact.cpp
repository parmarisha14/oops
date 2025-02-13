// step:1 start
#include<iostream>
using namespace std;
int main(){
    //step:2 initialize variables
    int n,fact=1,i;
    cout<<"ente the N number:";
    cin>>n;
    i=n;
    //step:3 check conditions
    // step:4 if conditions is true then go to step 5 othewise go to 7
    while(i>=1){
        // step 5:formula
        fact=fact*i;
        i--;
        // step:6 go to step:3
    }
    //step:7 print the sum value
    cout<<"Factorial of number: "<<fact;
    // end
    return 0;
}