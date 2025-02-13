#include<iostream>
using namespace std;
int main(){
    int sum=0,num,lastdigit,firstdigit;
    cout<<"Enter the number: ";
    cin>>num;
    lastdigit=num%10;
    while(num>=10){
       
         num=num/10;
    //  firstdigit=num;
    // sum=firstdigit+lastdigit; 
       
    }
    firstdigit=num;
    sum=firstdigit+lastdigit;  
    cout<<"sum of first and last digit of sum: "<<sum;
    return 0;
}