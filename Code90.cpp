// Pointer

// Direfrence operator(*)- It gives the value by providing the address in which value is stored 

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    int** parptr=&ptr;
    cout<<&a<<endl;//Gives the address of a
    cout<<*(&a)<<endl;// Gives the value stored in given address which is 10.
    cout<<*(ptr)<<endl;
    cout<<*(parptr)<<endl;
    cout<<ptr<<endl;
    cout<<**(parptr)<<endl;
    cout<<parptr<<endl;

    // NULL POINTER:A POINTER THAT DOESN'T POINT ANY LOCATION
int* ptr6=NULL;
cout<<ptr6<<endl; // Direfrence of null gives error;
cout<<*(ptr6)<<endl;

    return 0;
}
// output
// 0x7ffef0725164 
// 10
// 10
// 0x7ffef0725164
// 0x7ffef0725164
// 10
// 0x7ffef0725168
// 0

