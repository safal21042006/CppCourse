// FINDING FACTORIAL 
#include<iostream>
using namespace std;
void factn(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
        
    }cout<<fact;
}
    int main(){
        factn(5);
        return 0;
    
}