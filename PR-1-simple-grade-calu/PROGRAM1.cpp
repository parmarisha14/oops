#include<iostream>
using namespace std;
int main(){
    int score;
    char grade;
    cout<<"Enter Your score:";
    cin>>score;
     grade = (score>=90)?'A' : (score>=80)? 'B' : (score>=70)? 'C' : (score>=60)? 'D' : (score>=40)? 'E' : (score>=20)? 'F' : 'F';
    cout<<"Your garde is:"<<grade<<endl;
    
    switch(grade){
        case 'A':
            cout<<"Excellent work"<<endl;
        break;
        case 'B':
            cout<<"Well done"<<endl;
        break;
        case 'C':
            cout<<"Good job"<<endl;
        break;
        case 'D':
            cout<<"You passed,but you could do better"<<endl;
        break;
        case 'E':
            cout<<"better"<<endl;
        break;
        case 'F':
            cout<<"Sorry failed"<<endl;
        break;
        default:
            cout<<"Invalid grade";
    }  
    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'){
        cout<<"Excellent work!you are eligible for the next level"<<endl;
    }
    else{
        cout<<"please try again next time"<<endl;
    }
    return 0;
}