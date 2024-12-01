// SUM OF ALL ODD NUMBER FRO I TO N
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" ";
            sum+=i;
        }
        
    }
    cout<<endl;
    cout<<"SUM OS ODD NUMBER IS:"<<sum;
}