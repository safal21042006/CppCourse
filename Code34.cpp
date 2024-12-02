/* 
1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}
// TO COMPILE : g++ Code34.cpp
// TO RUN: ./a.out