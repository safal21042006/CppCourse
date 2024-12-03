// CALCULATE THE SUM FROM 1 TO N
#include<iostream>
using namespace std;
void sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }        cout<<sum;
}
    int main(){
        sumN(5);
    }
