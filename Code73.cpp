// LEETCODE QUESTION 136 SINGLE NUMBER
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,2,3,3};
    int ans=0;
    for(int val : nums){
        ans=ans^val;        
    }
    cout<<"single number is:"<<ans<<endl;
    return 0;

}