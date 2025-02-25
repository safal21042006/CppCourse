//Aggresive cows problem 
// Solve with the binary search approach
// Lecture 23

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int>arr,int C,int N,int MinAllowedDistance){

    int cow=1,laststallpos=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]-laststallpos>=MinAllowedDistance){
            cow++;
            laststallpos=arr[i];
        }
        if(cow==C){
            return true;
        }
    }
    return false;

}

int AggressiveCows(vector<int>arr,int C,int N){
    sort(arr.begin(),arr.end()); //Olog(N)
    int maxelement=*max_element(arr.begin(),arr.end());
    int minelement=*min_element(arr.begin(),arr.end());
    int st=0,end=maxelement-minelement,ans=-1; // Range from min seperation between two cows to max seperation between two cows possible
    while(st<=end){  //O(log(Range)*N)
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
}