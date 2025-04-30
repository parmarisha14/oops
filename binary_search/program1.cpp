#include<iostream>
#include<vector>

using namespace std;
int binarySearch(vector<int>&arr,int key)
{
    int left=0;
    int right=arr.size()-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]=key)
            return mid;
        else if(arr[mid]<key)
             left=mid+1;
        else
            right=mid-1;
    }
    return -1;
    
}
void display(vector<int>&arr){
    cout<<"Array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int key,result;
    display(arr);
    if(arr.size() != 0)
    {
     cout<<"Enter target: ";
     cin>>key;
     result = binarySearch(arr,key);
    }
    else
    {
     cout<<"Array is Empty.";
     return 0;
    }
 
 
     if(result!= -1)
         cout<<"targeted value "<<key<<" at index "<<result<<endl;
     else
         cout<<"targeted value "<<key<<" not found"<<endl;
    return 0;
}