#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the array's row size:";
    cin>>row;
    cout<<"Enter the array's column size:";
    cin>>column;
    int arr[row][column];
    cout<<"Enter array's elements:"<<endl;;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    int rownum,columnnum;
    cout<<"Enter row number: ";
    cin >> rownum;
    cout<<"Elements of row "<<rownum<< ": ";
    for(int j=0;j<column;j++) 
    {
        cout<<arr[rownum][j]<< " ";
    }
    cout<<endl;
    
    int rowsum=0;
    for(int j=0;j<column;j++) 
    {
        rowsum+=arr[rownum][j];
    }
    cout <<"The sum of row"<<rownum <<": "<<rowsum <<endl;
    cout<<endl;
    cout << "Enter column number: ";
    cin >> columnnum;
    cout<<"The elements of column "<<columnnum << ": ";
    for(int i=0;i<row;i++)
    {
        cout<<arr[i][columnnum]<< " ";
    }
    cout<<endl;
    
    int columnsum=0;
    for(int i=0;i<row;i++) 
    {
        columnsum+=arr[i][columnnum];
    }
    cout<<"The sum of column "<< columnnum << ": "<<columnsum << endl;
    return 0;
}