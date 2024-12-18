//Kadane Algorithm 
// Most Optimised Form
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int currsum=0;
    int maxsum=INT_MIN;
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){   // AGAR CURRENT SUM NEGATIVE AAYEGA TOH OBVIOUS WO AAGA WALA TERM KA SATH SUM KO KAM KRAGA ISLIYA HAM USKO RESET 0 KRDENGA
            currsum=0;// RESET WALI CONDITION ISILIA LAST ME LIA H AGAR SARI NEGATIVE TERMS KA ARRAY HO TOH ATLEAST EK BAAR TOH MAX SUM KI VALUE AAYEGI
        }
    }
    return 0;
}