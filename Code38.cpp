/*
1 1 1 1
  2 2 2
    3 3 
      4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){ // FOR PRINTING THE SPACE
           cout<<" ";
        }
            for(int k=0;k<n-i;k++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return 0;
}