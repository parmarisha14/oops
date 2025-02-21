#include<iostream>
using namespace std;
int main(){
    int arr1[3][3],arr2[3][3],mul[3][3];
    cout<<"Enter the 1st array:"<<endl;
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++){
           cout<<"Enter the value:";
           cin>>arr1[i][j];
        }
        
    }
    cout<<endl;
    cout<<"Enter the 2nd array:"<<endl;
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++){
           cout<<"Enter the value:";
           cin>>arr2[i][j];
        }
        
    }
    
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++){
           mul[i][j]=arr1[i][j]*arr2[i][j];
        }
        
    }
    cout<<"Output:"<<endl;
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++){
          cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}