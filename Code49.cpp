// CHAPTER 6
// BINARY NUMBER SYSTEM
// DECIMAL TO BINARY
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int decnumber=50;
    int rem;
    int pow=1;//10^0
    while(decnumber>0){
        rem=decnumber%2;
        decnumber=decnumber/2;
        sum+=(rem*pow);
        pow=pow*10;
     }
     cout<<"binary number is:"<<sum<<endl;
    return 0;
    }