// Function to Calculate Factorial (Recursion)
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}
int main(){
    cout<<"Factorial: "<<factorial(5);
    return 0;
}