// Left Rotate an Array

#include <iostream>
using namespace std;
int main()
{
    int arr[5],first;
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    first=arr[0];
    for (int i=0;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[4]=first;
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}