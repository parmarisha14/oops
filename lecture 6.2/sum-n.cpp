#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"enter the N number:";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    } cout<<"the sum of N number: "<<sum;
    return 0;
}