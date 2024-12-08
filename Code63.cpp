#include<iostream>
using namespace std;
int main(){
    int size=5;
    int marks[size];
    for(int i=0;i<size;i++){
        cin>>marks[i]; // FOR INPUT
    }
    for(int i=0;i<size;i++){  // FOR OUTPUT
        cout<<marks[i]<<" ";
    }cout<<endl;
    return 0;
}