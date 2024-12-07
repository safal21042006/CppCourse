// PROGRAM WHICH PRINT THE TABLE OF NUMBER IN FUNCTION
#include<iostream>
using namespace std;
void printtable(int n){
    for(int i=1;i<=10;i++){
        cout<<n*i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printtable(n);
    return 0;
}