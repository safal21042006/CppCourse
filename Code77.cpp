/* Pair sum
if the given array is [2,7,11,15] and return sorted array with target sum means 
if target sum is 9 then we take 2 and 7 so 2,7 makes pair
best approach is brute force here we find all pairs and find index with the help of vector and return pair
*/
// SELF TRY
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n=4;
   int arr[n]={2,7,11,15};
   int target=9;
   for(int st=0;st<n;st++){
    for(int end=st+1;end<n;end++){
        if(arr[st]+arr[end]==target){
            cout<<st<<","<<end<<endl;
        }
    }
   }
}