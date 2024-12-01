/*
1 2 3 
4 5 6 
7 8 9 
*/
#include<iostream>
using namespace std;
int main(){
    int m=1;
    int n;
    cout<<"ENTER THE NUMBER OF ROWS";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
            m++;
            }
            cout<<endl;
    }
    return 0;
}