// max find
#include<iostream>
using namespace std;
int main(){
    int array[3][3],max;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the 2-D array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    max=array[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    cout<<"max number:"<<max<<endl;
    return 0;
}