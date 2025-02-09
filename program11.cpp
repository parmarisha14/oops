// Sort an Array (Descending)
#include<iostream>
using namespace std;
int main(){
    int arr[5],temp;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=j+1;j<5;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}