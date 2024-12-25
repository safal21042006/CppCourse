// Buy And Sell Stock
// Leetcode Question - 121
// FOR Max profit buy least cost stock and sell highest price stock
// Since we can't solve direct min. and max value becoz after buy you can't move backword.
// day 1(arr[0])cannot be selling day becoz buy day before selling day and buy day can't be in negative index
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int price[n]={7,2,3,1,5};
    int maxprofit=0;
    int bestbuy=price[0];
    for(int i=2;i<n;i++){ // Complexicity=O(n);
        if(price[i]>=bestbuy){
            maxprofit=std::max(maxprofit,price[i]-bestbuy);
        }
        bestbuy=std::min(bestbuy,price[i]);
    }
    cout<<maxprofit<<endl;
}
