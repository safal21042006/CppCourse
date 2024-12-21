// MOST OPTIMISED FORM:Moore's Voting algorithm:
/* IN MOORE HAME SORTING KRNA KI JARURAT BHI NHI HAA SIMPLE FREQUENCY COUNT KRANGA 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={2,1,1,2,2};
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=arr[i];
        }if(ans==arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
     cout<<ans<<endl;
}