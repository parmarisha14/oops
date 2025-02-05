// * * * * * 
//     *
//     *
//     *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        char ch='*';
        for(j=1;j<=6-1;j++){
            if(i==1||i==5||j==3){
                cout<<ch<<" ";

            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}