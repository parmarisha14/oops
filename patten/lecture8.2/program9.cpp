// A B C 
// D E F 
// G H I 
#include<iostream>
using  namespace std;
int main(){
    int i,j;
    char k='A';
    
    for(i=1;i<=3;i++){
    
        for(j=1;j<=3;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}