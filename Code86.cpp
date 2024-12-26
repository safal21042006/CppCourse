// Most optimised form:Two pointer approach
// Two pointer approach have O(n)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=9;
    int height[n] = {1,8,6,2,5,4,8,3,7};
    int lp=0,rp=n-1; // lp=left pointer,rp=right pointer
    int maxwater=0
    while(lp<rp){
        int width=rp-lp;
        int h=std::min(height[lp],height[rp]);
        int area=width*h;
        maxwater=std::max(maxwater,area);
        if(height(lp)<height(rp)){
            lp++;
        }else{
            rp--;
        }
    }
    cout<<"MAX WATER IS:"<<maxwater<<endl;
    return 0;
}