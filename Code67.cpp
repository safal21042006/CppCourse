// LINEAR SEARCH
#include<iostream>
using namespace std;
int  search(int n){
    int arr[6]={4,54,23,35,85,89};
    for(int i=0;i<6;i++){
        if(arr[i]==n){
            cout<<i<<endl;
            return i; // IF VALUE IS FOUND
        }
    }
    return -1;// IF NOT FOUND
       
}
int main(){
    int n;
    cin>>n;
    search(n);
    cout<<search(n)<<endl;
}