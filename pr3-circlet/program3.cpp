#include<iostream>
using namespace std;
int main(){
   int i,j,k;
    int n=5; 
    for(i=0;i<n;i++)
     {
        for(k=0;k<i;k++)
         {
            cout<<"  ";
        }
        for(j=0;j<n-i;j++) 
        {
            if(j%2==0)
             {
                cout<<"1 ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}