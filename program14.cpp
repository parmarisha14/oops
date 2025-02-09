// Remove Duplicates from Array
#include<iostream>
using namespace std;
int main(){
    int arr[5],uniquearr[5],size=0;
    for(int i=0;i<5;i++){
        cout<<"enter the elements";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        bool isduplicate=false;
        for(int j=0;j<size;j++){
            if (arr[i]=uniquearr[j]){
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate){
            uniquearr[size]=arr[i];
            size++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<uniquearr[i]<<endl;
    }
    return 0;
}