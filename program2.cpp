// Input and Print an Array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    cout<<"Output"<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}