#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
           idx++;
           swap(arr[j], arr[idx]); 
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end) {
    if(st < end){
        int pivInx = partition(arr, st, end);

        quickSort(arr, st, pivInx-1); 
        quickSort(arr, pivInx+1, end); 
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size()-1);

    cout << "Sorted array: ";
    for(int val : arr){
        cout << val << " | ";
    }
    cout << endl;

    return 0;
}