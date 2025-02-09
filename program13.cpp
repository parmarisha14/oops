// Second Smallest Number in Array
#include<iostream>
using namespace std;
int main(){
        int arr[5],min,secondmin;
        for(int i=0;i<5;i++) {
        cout<<"enter the elements:";
        cin >> arr[i];
        }
        min=secondmin=arr[0];
        for(int i=1;i<5;i++) {
            if(arr[i]<min) {
                secondmin = min;
                min = arr[i];
        } else if(arr[i] < secondmin && arr[i] != min) {
        secondmin = arr[i];
        }
    }
    cout << "Second Smallest: " << secondmin << endl;
 return 0;
}