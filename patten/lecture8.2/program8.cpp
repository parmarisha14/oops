// A B C D E 
// A B C D E
// A B C D E 
// A B C D E
// A B C D E 
#include<iostream>
using  namespace std;
int main(){
    int i,j;
    
    for(i=1;i<=5;i++){
       char ch='A';
        for(j=1;j<=5;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}