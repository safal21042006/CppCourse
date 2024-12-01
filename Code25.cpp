// PRIME NUMBER OR NOT
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i == 0){
            cout<<"NOT A PRIME NUMBER";
        break;
        }else{
            cout<<"PRIME NUMBER";
            break;
        }
    }
    return 0;
}