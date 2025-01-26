//SINGLE ELEMENT IN A SORTED ARRAY
//BY BRUTE FORCE APPROACH(TC-O(n))

#include<iostream>
#include<vector>
using namespace std;
int SE(vector<int>nums){
    int st=0,end=nums.size()-1;
    for(int i=st;i<=end;i++){
        if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,1,2,2,3,3,4,5,5};
    cout<<SE(nums)<<endl;
    return 0;
}