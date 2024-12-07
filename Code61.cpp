// KEEP TAKING INPUT FROM USER UNTIL USER ENTER AN ODD NUMBER

#include<iostream>
using namespace std;
int main(){
    do{
        int n;
        cout<<"ENTER NUMBER"<<endl;
        cin>>n;
        if(n%2!=0){
            break;
        }
    }while(1);
    cout<<"THANK YOU";
}
