// POINTERS 

#include<iostream>
using namespace std;
int main(){
    // int a=10;
    // cout<<&a<<endl;//This &sign gives the address of a in hexadecimal form
    int a=10;
    int *ptr=&a;// Through this we store the address of a variable into another variable called as pointer
    // Agar int type ka variable ka address store krna ho toh int type ka hi pointer create krna h

    int** ptr3=&ptr; // Pointer to pointer (ptr 2 stores the addtess of pointer)
    cout<<&a<<endl; // Gives the address of a
    cout<<ptr<<endl; // since ptr stores the address of a so same output recieved
    cout<<ptr3<<endl;
    cout<<&ptr<<endl; // Gives the address of ptr which is different of above two


    float price=10.2;
    float *ptr2=&price;
    cout<<&price<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    return 0;
}

//Output
// 0x7ffd9ab03f28
// 0x7ffd9ab03f28
// 0x7ffd9ab03f30
// 0x7ffd9ab03f30
// 0x7ffd9ab03f2c
// 0x7ffd9ab03f2c
// 0x7ffd9ab03f38