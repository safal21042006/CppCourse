// SUM FROM 1 TO N
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"SUM IS:\n"<<sum;
    return 0;
}