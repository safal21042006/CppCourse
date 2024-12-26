// Container with most water
// Here array of height n is given in which every line height is given
/* Max water we have to calculate so we taken max height and max width
*/
/*By brute force approach- we have to pick two vertical lines to make container 
here we take two boundary left and right right boundary always start from (left+1)to n
width = subtraction of two index
height=min of two array height becoz min height control water flow
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=9;
    int arr[n] = {1,8,6,2,5,4,8,3,7};
    int width,height,area;
    int maxwater=0;
    // Calculation of max water trapped
    for(int i=0;i<n;i++){ // Time complexicity is O(n^2)
        for(int j=i+1;j<n;j++){ 
            width=j-i; // Width of the container
            height=std::min(arr[i],arr[j]); // height of the container
            area=width*height;
            maxwater=std::max(maxwater,area);
        }
    }
    cout<<"MAXIMUM WATER IS:"<<maxwater<<endl;
}