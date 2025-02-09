// Count Even and Odd Numbers
#include<iostream>
using namespace std;
int main(){
    int arr[5],even=0,odd=0;
    for(int i=0;i<5;i++){
        cout<<"enetr the elements:";
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
           odd++;
        }
    }cout<<"Even:"<<even<<",Odd:"<<odd<<endl;
    return 0;
}