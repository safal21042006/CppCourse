// FUNCTIONS : 
// WHEN FUNCTION DOES NOT RETURN ANYTHING THEN WE WRITE VOID AND WHEN FUNCTION RETURN THEN WE WRITE INT 
// #include<iostream>
// using namespace std;
// void printhello(){
//     cout<<"hello";
// }
// int main(){
//     printhello();
// }


#include<iostream>
using namespace std;
// function definition
int  printhello(){
    cout<<"hello";
    return 1;
}
// function call
int main(){
    int val=printhello();
    cout<<endl<<"value:"<<val;
    return 0;
}
