    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5 

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>=i;k--)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"";
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}