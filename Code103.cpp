// REVISION OF PREVIOUS QUESTION
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvalid(vector<int>&arr,int n,int m,int MaxAllowedPages){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
    if(pages+arr[i]<=MaxAllowedPages){
        pages+=arr[i];
    }
    else{
        student++;
        pages=arr[i];
    }
}
    return student>m?false:true;
}

int bookallocated(vector<int>&arr,int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=*max_element(arr.begin(),arr.end()),end=sum;
    int ans=0; 
    if(m>n){
        return false;
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=3,m=2;
    vector<int>arr={15,17,20};
    cout<<bookallocated(arr,n,m)<<endl;
    return 0;
}
