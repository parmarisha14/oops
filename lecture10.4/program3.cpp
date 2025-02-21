// min find
#include<iostream>
using namespace std;
int main(){
    int array[3][3],min;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of 2-D array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    min=array[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(array[i][j]<min){
                min=array[i][j];
          }
        }
    }
    cout<<"minimum number:"<<min;
    return 0;
}