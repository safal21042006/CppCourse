// BY APNA COLLEGE (VECTOR METHOD)
#include<iostream>
#include<vector>
using namespace std;
vector<int>PairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=4;
    for(int st=0;st<n;st++){
        for(int end=st+1;end<n;end++){
           if(nums[st]+nums[end]==target){
            ans.push_back(st);
            ans.push_back(end);
           }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=PairSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
}