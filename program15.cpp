#include<iostream>
using namespace std;
int main(){
    int arr[5],freq[5]={0};
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        int count=1;
       if(freq[i]==0){
         for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=-1;
            }
        }
         cout<<arr[i]<<"occurs"<<count<<"times"<<endl;
       }
    }
    return 0;
}