/*
A B C D E
A B C D E 
A B C D E 
A B C D E 
A B C D E 

*/

#include<iostream>
using namespace std;
int main(){
    for(char i=65;i<=69;i++){
        for(char j=65;j<=69;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}