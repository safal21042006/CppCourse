// SAME AS PREVIOUS QUES WITH EHILE LOOP

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }cout<<"SUM IS:"<<sum;
}