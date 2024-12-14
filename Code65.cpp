// FIND THE MAX VALUE
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size=7;
    int price[size];
    for(int i=0;i<size;i++){
        cin>>price[i];
    }
    int largest= INT_MIN;
    for(int i=0;i<size;i++){
        if(price[i]>largest){
            largest=price[i];
        }     
    }
    cout<<"MAXIMUM PRICE IS:"<<largest<<endl;
    return 0;  
}