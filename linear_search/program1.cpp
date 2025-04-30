#include<iostream>
#include<vector>
using namespace std;
int linera_search(vector<int>&arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    int result=linera_search(arr,7);
    if(result!=-1)
    {
        cout<<"Index of target elements is:"<<result<<endl;
    }
    else{
        cout<<"Not found."<<endl;
    }
    return 0;
}