//TAKING FOR EACH LOOP IN VECTOR
#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int>vec(5,0);
//     for(int i : vec ){
//         cout<<i<<" ";  // HERE i is a type of vec and it takes all the value by going each index
// }
//     cout<<endl;
//     return 0;
// }
int main(){
    vector<char>vec={'a','b','c','d','e','f'};
    for(char val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}