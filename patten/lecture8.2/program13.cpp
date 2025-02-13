// 5
// 4 4
// 3 3 3 
// 4 4 4 4 
// 1 1 1 1 1

#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(k=5;k>=1;k--){
            cout<<"  ";
        }
        for(j=1;j<=6-i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}