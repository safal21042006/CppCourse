#include<iostream>
#include<vector>
#include<algorithm>
using namspace std;
bool ispossible(vector<int>arr,int C,int N,int MaxAllowedDistance){
    int cow=1,distance=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]-distance>=MaxAllowedDistance){
            cow++;
            distance=arr[i];
        }
        if(Cows==C){
            return true;
        }
    }
    return false;
}
int AggressiveCows(vector<int>arr,int C,int N){
    int st=1;
    int Max Number=*max_element(arr.begin(),arr.end());
    int Min Number=*min_element(arr.begin(),arr.end());
    int end=Max Number-Min Number,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr,C,N,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int N=5,C=3;
    vector<int>arr={1,2,8,4,9};
    cout<<AggressiveCows(arr,C,N)<<endl;
    return 0;
}