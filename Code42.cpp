// MIN OF 2 TERMS:
#include<iostream>
using namespace std;
void min(int a,int b){
    if(a<b){
        cout<<"MIN VALUE:A:"<<a<<endl;
    }else{
        cout<<"MIN VALUE:B"<<b<<endl;
    }
}
int main(){
    min(3,4);
    return 0;
}