//CHAPTER 9 VECTORS
//BASIC REPRESENTATION OF VECTOR
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec={1,2,3};
    vector<int>vect(3,0);// 3 represents the size and 0 in each block
    // cout<<vec[0]<<endl;
    cout<<vect[0]<<endl;
     cout<<vect[1]<<endl;
      cout<<vect[2]<<endl;
    return 0;
}