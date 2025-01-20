// ARRAY POINTER
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,5,6};// Here arr is a pointer who always gives the information of first element
//     cout<<arr<<endl;// Here arr is a constant pointer it cant be change
//     cout<<*(arr)<<endl;
//     return 0;
// }
/*
Output-0x7ffc18989980(address of 1)
1(value of first element)
*/

// Increment / decrement
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int arr[]={1,2,3,4,5};
    int *ptr=&a;
    cout<<ptr<<endl;// Gives address of a 
    ptr++; // Gives changes in hexadecimal form and value ++ means uska datatype ka hisaab se 1 int badhta since it is integer so 4byte badega
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    ptr=ptr+2; // 2 int =>8 byte
    cout<<ptr<<endl;

    cout<<arr<<endl;// Gives the address
    cout<<*(arr)<<endl;//Since this direference operator gives the value of first element
    cout<<*(arr+1)<<endl;/*Since we know that array is contiguous means if first element address is 100 and 
     and datatype is int then next element address is 104 and +1 int increase 4 byte and with the help of direference 
     it gives next value of array */
    cout<<*(arr+2)<<endl;

    int *ptr2;
    int *ptr1=ptr2+2// Means by increasing 2int  it increases 8 bytes 
    // cout<<ptr1-ptr2<<endl; // IT GIVES THE DATATYPE VALUE(NO.OF INT,FLOAT)BY SUBTRACTING THE BYES SO HERE DIFFERENCE IS 8 BYTE SO IT GIVES 2INT
    return 0;
}
/*Output-
0x7ffe7b4b2cc4
0x7ffe7b4b2cc8
0x7ffe7b4b2cc4
0x7ffe7b4b2ccc
0x7ffe7b4b2cd0
1
2
3
*/