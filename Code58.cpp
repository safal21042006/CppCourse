// WRITE A FUNCTION THAT PRINTS NAMASTE IF USER IS INDIAN & BONJOUR IF THE USER IS FRENCH

#include<iostream>
using namespace std;
void print(){
    string ch;
    cin>>ch;
    if(ch=="INDIAN"){
        cout<<"NAMASTE"<<endl;
    }
    else if(ch=="FRENCH"){
        cout<<"BONJOUR"<<endl;
    }
    
}
int main(){ 
    print();
    return 0;
}