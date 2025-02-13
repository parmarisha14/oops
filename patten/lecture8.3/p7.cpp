//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * *
//      *
#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<=5;i++){
        for(j=5-i;j>=1;j--){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<=6;i++){
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        for(k=5-1;k>=i;k--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}