#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the array's row size:";
    cin>>row;
    cout<<"Enter the array's column size:";
    cin>>column;
    int arr[row][column];
    cout<<"Enter array's elements:"<<endl;;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>largest)
            {
                largest=arr[i][j];
            }
        }
    }
    cout<<"The largest number:"<<largest;
    return 0;
}