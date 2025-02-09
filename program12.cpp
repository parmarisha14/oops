// Second Largest Number in Array
#include<iostream>
using namespace std;
int main(){
    int arr[5],max,secondmax;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    max=secondmax=arr[0];
    
    for(int i=1;i<5;i++){
      
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax&&arr[i]!=max){
            secondmax=arr[i];
        }
    }
    cout<<"Second largest:"<<secondmax<<endl;
    return 0;
}