// BINARY TO DECIMAL
#include<iostream>
using namespace std;
void bintodec(int number){
    int sum=0;
    int pow=1;//2^0;
    while(number>0){
        int rem=number%10;
        number=number/10;
        sum+=(rem*pow);
        pow*=2;
    }
     cout<<sum<<endl;
}
int main(){
        bintodec(110);
        return 0;
    }