// * * * * * 
// *       *
// * * * * *
// *       *
// *       *
#include<iostream>
using  namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
       char ch='*';
        for(j=1;j<=5;j++){
            
            if(i==1||i==3||j==1||j==5)
            {
                cout<<ch<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}