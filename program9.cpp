//  Find an Element in an Array
#include<iostream>
using namespace std;
int main(){
    int arr[5],key,found=0;
    for(int i=0;i<5;i++){
        cout<<"enter the elements:";
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}