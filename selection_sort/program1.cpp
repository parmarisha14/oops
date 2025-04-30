#include<iostream>
using namespace std;
void selection_sort(int arr[], int n);
void display(int arr[], int n);
int main() {
    int n;
    cout<<"Enter the total number: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    selection_sort(arr,n);
    display(arr,n);
    return 0;
}

void selection_sort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        int minIndex=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[minIndex]) {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void display(int arr[],int n) {
    cout << "Output: ";
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}