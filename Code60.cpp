// PROGRAM TO TAKEN THE PRICE BY USER AND ADD 18% TO PRICE
#include<iostream>
using namespace std;
void print(int n){
    float newprice;
    newprice=n+(n*0.18);
    cout<<newprice<<endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}