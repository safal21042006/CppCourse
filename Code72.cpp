#include<iostream>
#include<vector>
using namespace std;
int main(){
    // SO VECTOR IS DYNAMIC MEMORY ALLOCATION MEANS RESIZE POSSIBLE AND AFTER PUSH BACK SIZE ONE INCREASE BUT CAPACITY BECOMES DOUBLE
    
    vector<int>vec;
    vec.push_back(1);
    cout<<"SIZE"<<vec.size()<<endl;
    cout<<"CAPACITY"<<vec.capacity()<<endl;

    vec.push_back(2);
    cout<<"SIZE"<<vec.size()<<endl;
    cout<<"CAPACITY"<<vec.capacity()<<endl;

    vec.push_back(3);
    cout<<"SIZE"<<vec.size()<<endl;
    cout<<"CAPACITY"<<vec.capacity()<<endl;
    return 0;

}