//  Insert Element at Specific Position

#include <iostream>
using namespace std;
int main()
{
    int arr[6],pos,num;
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cin>>pos>>num;
    for (int i=5;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    for (int i=0;i<6;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}