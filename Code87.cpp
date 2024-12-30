// Leetcode Question 238
// Product Of the array except self
//Ex-nums=[1,2,3,4] ans=[24,12,8,6]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=4;
    vector<int>nums={1,2,3,4};
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
}