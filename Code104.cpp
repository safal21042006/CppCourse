// Painter Partition Problem
// DSA - VIDEO 22
// SAME AS BOOK ALLOCATED PROBLEM

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvalid(vector<int>&arr,int n,int m,int MaxAllowedTime){
    int time=0,painter=1;
    for(int i=0;i<=arr.size()-1;i++){  
        if(arr[i]>MaxAllowedTime){  // ITS OBIVIOUS THAT IF INDIVIDUAL ARRAY VALUE GREATOR THAN MAX THEN THIS IS NOT ANSWER
            return false;
        }
        if(time+arr[i]<=MaxAllowedTime){ // SO HERE LESS SO WE ARE ABLE TO ADD NEXT ARR TO TIME AND COMPARE 
            time+=arr[i];
        }
        else{     // SO HERE VALUE GREATOR THAN MAX SO NEXT PAINTER COME AND HE HAVE TIME START FROM ARRAY WHERE FROM HE IS STARTING 
            painter++;
            time=arr[i];
        }
    }
    return painter>m?false:true;
}

int painterpartition(vector<int>&arr,int n,int m){
    int sum=0; //SUM OF ALL TIME TO PAINT THE BLOCKS
    for(int i=0;i<=arr.size()-1;i++){
        sum+=arr[i];
    }

    if(m>n){
        return -1;
    }

    int st=*max_element(arr.begin(),arr.end()),end=sum;   // RANGE FOR APPLYING BINARY SEARCH (SORTED TERMS)
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){ // VALID SO THIS IS POSSIBLE ANSWER BUT WE TAKEN LEAST VALUE SO LEFT MOVE
            ans=mid;
            end=mid-1;
        }
        else{  // INVALID= RIGHT 
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int n=3,m=2;
    vector<int>arr={40,30,10,20};
    cout<<painterpartition(arr,n,m)<<endl;
    return 0;
}



// ANS=60MIN (OUTPUT)

