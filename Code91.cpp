// Pass by reference using pointers
// #include<iostream>
// using namespace std;
// void change(int *ptr){
//     *ptr=20; // SO successfully change pass by value to pass by reference using pointer
// }
// int main(){
//     int a=10;
//     change(&a);
//     cout<<"Fxn inside main fxn is:"<<a<<endl;
// }
//output-Fxn inside main fxn is:20

#include<iostream>
using namespace std;
void change(int &b){// & is not address here its a alias means same as a
    b=20; // SO successfully change pass by value to pass by reference using the alias
}
int main(){
    int a=10;
    change(a);
    cout<<"Fxn inside main fxn is:"<<a<<endl;
}
//Output-Fxn inside main fxn is:20