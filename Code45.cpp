// PASS BY VALUE
#include<iostream>
using namespace std;
void pro(int x){
   
    x=2*x;
   cout<<x<<endl;
}
int main(){
    int x=2;

    pro(x);
    cout<<"x:"<<x<<endl;
    return 0;
}