#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(k=5;k>=i;k--)
        {
            cout<<"  ";
        }
           for(j=i;j>=1;j--){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}