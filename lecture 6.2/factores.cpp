#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the N number:";
    cin>>n;
    i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<",";
        }
        i++;
    }
    return 0;
}