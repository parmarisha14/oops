#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int j=0;j<3;j++){
        int colSum=0;
        for(int i=0;i<3;i++){
            colSum+=arr[i][j];
        }
        cout<<"sum of column"<<j+1<<"="<<colSum<<endl;
    }
   
    return 0;
}