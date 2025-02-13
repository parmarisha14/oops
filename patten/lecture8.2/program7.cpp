// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45 
#include<iostream>
using namespace std;
int main(){
    int i=41,j,k;
    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){
            k=40+j;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}