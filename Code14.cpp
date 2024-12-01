#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER THE NUMBER";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A IS MAX";

    }else if(b>a && b>c){
        cout<<"B IS MAX";
    }
    else{
        cout<<"C IS MAX";
    }
    return 0;
}