#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"enter your days:";
    cin>>days;
    switch(days)
    {
        case 1:
            cout<<"mondays";
        break;
        case 2:
            cout<<"tuesday";
        break;
        case 3:
            cout << "wednesday";
        break;
        case 4:
            cout<<"thusday";
        break;
        case 5:
            cout<<"friday";
        break;
        case 6:
            cout<<"saturday";
        break;
        case 7:
            cout<<"sunday";
        break;
        default:
            cout<<"invalid day";
        
    }
}