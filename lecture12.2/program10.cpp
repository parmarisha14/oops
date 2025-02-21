// Function to Check Prime Number
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    cout<<(isprime(29) ?"prime":"not prime")<<endl;
    return 0;
}