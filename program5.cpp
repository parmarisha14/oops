// Sum of All Elements
#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum all digit: "<<sum<<endl;
    return 0;
}