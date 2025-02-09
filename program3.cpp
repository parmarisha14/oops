// Find Maximum in an Array
#include<iostream>
using namespace std;
int main(){
    int arr[5],max;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum: "<<max<<endl;
    return 0;
}