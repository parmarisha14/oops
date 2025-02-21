//odd or evem 
#include<iostream>
using namespace std;
int main(){
    int array[3][3],even=0,odd=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of 2-D array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
           if(array[i][j]%2==0){
               even++;
           }
           else{
                odd++;
           }
        }
    }
    cout<<"Even:"<<even<<endl<<"Odd:"<<odd<<endl;
    return 0;
}