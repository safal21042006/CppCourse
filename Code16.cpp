#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER CHARACTER";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"CHARACTER IS UPPERCASE";
    }else{
        cout<<"CHARACTER IS LOWERCASE";
    }
    return 0;
}