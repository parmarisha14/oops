// 1 2 3 4 5 4 3 2 1 
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
//         1

#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<"  ";
        }
        for(k=i-1;k>=1;k--){
            cout<<k<<"  ";
        }
          cout<<endl;
    }
    
      
    return 0;
}