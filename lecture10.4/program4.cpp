// sum of all digit
#include<iostream>
using namespace std;
int main(){
    int array[3][3],sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the value of 2-D array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
            sum+=array[i][j];
        }
    }
    cout<<"Sum of array:"<<sum<<endl;
    return 0;
}