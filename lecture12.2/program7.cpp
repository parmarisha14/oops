//Function to Swap Two Numbers (Call by Reference)
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    
}
int main(){
    int x=5,y=10;
    swap(x,y);
    cout<<"Swapped value:x= "<<x<<" y= "<<y<<endl;
}