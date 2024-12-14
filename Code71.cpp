//VECTOR FUNCTIONS:
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<"SIZE = "<<vec.size()<<endl; // SIZE OF VECTOR 
    
    vec.push_back(25);   // TO ADD NEW ELEMENT AND INCREASE THE SIZE
    cout<<vec[3]<<endl;//IT ALWAYS ADD IN LAST OF THE VECTOR 
    cout<<"NEW SIZE :"<<vec.size()<<endl;
    
    vec.pop_back(); //IT DELETE THE LAST VALUE OF VECTOR
    cout<<"SIZE :"<<vec.size()<<endl;

    cout<<vec.front()<<endl; //GIVES FIRST VALUE OF VECTOR

    cout<<vec.back()<<endl; //GIVES LAST VALUE OF THE VECTOR

    cout<<vec.at(0)<<endl; // GIVES THE VALUE AT SPECIFIC INDEX

    return 0;
}