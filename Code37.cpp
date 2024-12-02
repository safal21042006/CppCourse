/*
A
B C 
D E F 
G H I J 
*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER CHARACTER";
    cin>>ch;
    int m;
    cout<<"ENTER THE NUMBER OF ROWS :";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }cout<<endl;
    }
    return 0;
}