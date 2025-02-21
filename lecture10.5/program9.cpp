#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{2,5,6},{3,6,9}};
    bool isSymmetric=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(arr[i][j]!=arr[j][i]){
                isSymmetric=false;
                break;
          }
        }
    }
    if(isSymmetric){
        cout<<"The matrix is symmtric.";
      
    }
    else{
        cout<<"The matrix is  not symmtric.";
    }
    return 0;
}