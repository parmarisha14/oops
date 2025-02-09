// Find Minimum in an Array
#include<iostream>
using namespace std;
int main()
{
    int arr[5],min;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"minimum:"<<min<<endl;
    return 0;
}