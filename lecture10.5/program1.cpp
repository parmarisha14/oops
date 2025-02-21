#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter number of row and columns:";
    cin>>row>>cols; 

    int arr[row][cols];
    cout<<"Enter elements of the 2D array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter the elemet ["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    cout<<"2D Array:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        
        }
        cout<<endl;
    }

    return 0;
}