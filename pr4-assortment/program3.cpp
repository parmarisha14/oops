#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the array's row & column size:";
    cin>>size;
    int arr[size][size];
    int transpose[size][size];
    cout<<"Enter array Elements"<<endl;;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           transpose[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose of matrix:"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
