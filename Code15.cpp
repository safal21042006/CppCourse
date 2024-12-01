#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"ENTER THE NUMBER";
    cin>>marks;
    if(marks>=90){
        cout<<"A+";
    }else if(marks>=80 && marks<90){
        cout<<"A";
}else if(marks>=60 && marks<80){
    cout<<"B";
}else if(marks>33 && marks<60){
    cout<<"C";
}else{
    cout<<"D";
}
return 0;
}