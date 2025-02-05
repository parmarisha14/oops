// 41 
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45
#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
          
        for(j=1;j<=i;j++){
            k=40+j;
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}