#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(int i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<j;
            }
        }
        for(k=4;k>=1;k--){
            if(k<i){
                cout<<" ";
            }
            else{
                cout<<k;
            }
        }
        cout<<endl;
    }
    return 0;
}