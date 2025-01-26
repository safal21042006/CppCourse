// PREVIOUS QUESTION THROUGH BINARY SEARCH(optimised form)
//TIME & SPACE COMPLEXICITY IS O(logn)


#include<iostream>
#include<vector>
using namespace std;
int SE(vector<int>nums){
    int st=0,end=nums.size()-1;
    int n=nums.size();
    if(n==1)return nums[0];
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && nums[0]!=nums[1])return nums[0];
        if(mid==n-1  && nums[n-1]!=nums[n-2])return nums[mid];

        //CONDITION WHEN MID ITSELF IS SINGLE ELEMENT
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        //CONDITION WHEN LEFT AND RIGHT OF MID IS EVEN NO OF ELEMENT
        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){ //SURELY RIGHT SIDE CONTAINS ODD ELE.AFTER MID AND REPEATING MID REMOVE SO SINGLE ELEMET PR.
                end=mid-2; //LEFT SEARCH
            }
            else{
                st=mid+2; // RIGHT SEARCH
            }
        }
        //CONDITION WHEN LEFT AND RIGHT SIDE OF MID ARE ODD NO. OF ELEMENT
        else{
            if(nums[mid]==nums[mid-1]){ //SURELY AFTER REMOVING REPEAT MID AND MID LEFT SIDE CONTAINS EVEN ELEMENT SO SINGLE ELMENT MUST BE IN RIGHT SIDE
                st=mid+1; // LEFT SEARCH
            }
            else{
                end=mid-1; // RIGHT SEARCH
            }

        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,1,2,2,3,3,4,5,5};
    cout<<"SINGLE ELEMENT:"<<SE(nums)<<endl;
    return 0;
}