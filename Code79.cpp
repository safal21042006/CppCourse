/* SINCE IT IS GIVEN THAT ARRAY IN SORTED FORM SO THROUGH SORTED ARRAY WE WRITE MOST OPTIMISED FORM:
Here we use two pointer approach we start taking pair from starting and end and find pair sum here three comdition possible:
1)Pair sum>Target:if target is 9 and pair sum (2,15)=17 then j-- taken so sum decrease hoga
2)Pair sum<Target:if target is 26 and pair sum(2,15)=17 then i++taken so sum increase hoga
3)Pair sum=Target:Upar wla do kaam krange to equal aa jayega then i,j taken
example arr[2,7,11,15]
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>PairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=4;
    int i=0,j=n-1;
    while(i<j){
     int PairSum=nums[i]+nums[j];
        if(PairSum>target){
            j--;
        }
        else if(PairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        }
        return ans;
    }
int main(){
    vector<int>nums={2,7,11,15};
    int target=26;
    vector<int>ans=PairSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
}