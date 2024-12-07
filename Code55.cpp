// HW QUES
// FIND A NUMBER PRIME OR NOT USING FUNCTION
// PRIME NUMBER OR NOT
#include<iostream>
using namespace std;
void prime(int n){
    if(n<=1){
        cout<<"NOT A PRIME NUMBER:"<<endl;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<" NOT A PRIME NUMBER"<<endl;
            return ;
        }
    }
    cout<<n<<" PRIME NUMBER"<<endl;
    return;
}
int main(){
    prime(7);
    return 0;
}
