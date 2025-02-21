#include<iostream>
using namespace std;
int main(){
    int array[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the 2-D array["<<i<<"] ["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Output array["<<i<<"] ["<<j<<"]"<<array[i][j]<<endl;
        }
    }
    return 0;
}