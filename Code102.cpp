// BOOK ALLOACATION QUESTION- HARD LEVEL QUESTION
/* Here we distribute n number of pages which contain arr[i] pages to m number of students in such a that all books must be 
destribute in contiguous and all students have a book
*/

#include<iostream>
#include<vector>
using namespace std;
// CODE FOR CALCULATE VALUE IS VALID OR NOT
bool isvalid(vector<int>&arr,int n,int m,int maxAllowdPages){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowdPages){
            return false;
        }
        if(pages+arr[i]<=maxAllowdPages){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student>m?false:true;
}


// CODE FOR APPLYING BINARY SEARCH
int allocatebooks(vector<int>&arr,int n,int m){ // TIME COMPLEXICITY:O(logN * n){N=RANGE n=NO. OF BOOKS}

    int sum=0;// SUM=NO. OF PAGES (FOR APPLYING BINARY SEARCH)
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1; // -1 DOES'T IMPACT ON ANSWER -1REPLACE HO JAYEGA ISLIYA KOI FARAK NHI PADEGA;
    int st=0,end=sum ; // RANGE  {range=N}
    if(m>n){
        return -1;
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){ // VALID-LEFT
            ans=mid;
            end=mid-1;
        }
        else{ // INVALID-RIGHT
             st=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=4,m=2;
    vector<int>arr={2,1,3,4};
     cout<<"ANSWER:"<<allocatebooks(arr,n,m)<<endl;
    return 0;
}

