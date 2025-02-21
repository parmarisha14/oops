// Function to Find Maximum of Two Numbers
#include<iostream>
using namespace std;
int maxNum(int a,int b){
    return(a>b)?a:b;
}
int main(){
    cout<<"Max: "<<maxNum(10,20);
    return 0;
}