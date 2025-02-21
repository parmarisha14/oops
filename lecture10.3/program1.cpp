#include<iostream>
using namespace std;
int main(){
    int arr[20],n,ch,i,main;
    do{
        cout<<"Enter 5 for Exit for main menu and press 1 for continue:-";
        cin>>main;
        if(main==5){
            break;
        }
        cout<<"Enter count for element:- ";
        cin>>n;
        for(i=0;i<n;i++){
            cout<<"Element arr ["<<i<<"]:";
            cin>>arr[i];
        }
        do{
            cout<<endl;
            cout<<"Enter 1 for Read Elements."<<endl;
            cout<<"Enter 2 for Update Elements."<<endl;
            cout<<"Enter 3 for Delete Elements."<<endl;
            cout<<"Enter 4 for Exit from menu."<<endl;
            cout<<endl;

            cout<<"Enter your choice:";
            cin>>ch;
            cout<<endl;

            switch(ch){
                case 1:
                for(int i=0;i<n;i++){
                    cout<<"Element arr["<<i<<"]:"<<arr[i]<<endl;
                }
                break;

                case 2:
                cout<<"Enter the position to update(0 to"<<n-1<<")-";
                cin>>i;
                if(i>=0 &&i<n){
                    cout<<"Enter the new value:";
                    cin>>arr[i];
                }
                else{
                    cout<<"Invalid index!"<<endl;
                }
                break;

                case 3:
                cout<<"Enter the position to delete(0 to"<<n-1<<")-";
                cin>>i;
                if(i>=0 &&i<n){
                    for(int j=i;j<n-1;j++){
                        arr[j]=arr[j+1];
                    }
                    n--;
                    cout<<"Element deleted successfully."<<endl;
                }
                else{
                    cout<<"Invalid index!"<<endl;
                }
                break;

                case 4:
                    cout<<"Exiting menu..."<<endl;
                break;

                default:
                    cout<<"Invalid choice !Try again"<<endl;
            }
        }while(ch!=4);
    }while(main!=5);
    return 0;
}