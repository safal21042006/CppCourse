// scope
// Local scope: means what we introduce inside the loop,if else outside this is not valid and give error
// #include<iostream>
// using namespace std;
// int main(){
//     if(4>1){
//         int x=1; 
//     }
//     cout<<x<<endl; // Local scope
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=100;i++){

//     }
//     cout<<i<<endl; // Local scope
// }

// Global scope
#include<iostream>
using namespace std;
int x=10;
void fun(){
    cout<<x<<endl;
}
int main(){
    fun();
    cout<<x<<endl;
    return 0;
}