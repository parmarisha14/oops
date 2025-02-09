// Average of Elements
#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Average:"<<sum/5.0<<endl;
    return 0;
}