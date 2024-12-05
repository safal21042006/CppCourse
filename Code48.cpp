// CALCULATE nCr binomial coeffient for n and r
#include<iostream>
using namespace std;
void binocoeff(int n,int r){
    int nfact=1;
    int rfact=1;
    int diff;
    int nrfact=1;
    int binocoef;
    for(int i=n;i>=1;i--){
        nfact*=i;
    }
    for(int i=r;i>=1;i--){
        rfact*=i;
    }
    diff=n-r;
    for(int i=n-r;i>=1;i--){
        nrfact*=i;
    }
    binocoef=nfact/(rfact)*(nrfact);
    cout<<binocoef;
}
int main(){
    int n=8;
    int r=2;
    binocoeff(n,r);
    return 0;

}