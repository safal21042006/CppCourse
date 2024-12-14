 //PASS BY REFRENCE
 // IN C++ REFERENCE IS AN ALTERNATIVE NAME FOR AN OBJECT OR FUNCTION AND ITS ADDRESS OF THE OBJECT,AND ITS ADDRESS IS THE ADDRESS OF THE OBJECT IT REFERS TO.FOR SAKE OF UNDERSTANDING WE CALLING IT ADDRESS HERE;
// IN ARRAY AGAR DENITION OF FUNCTION LIKTA SAMAH KOI CHANGE KRANGA TOH CALL KRTA WAQT BHI WHI CHANGE SHOW HOGA
 #include<iostream>
 using namespace std;
 void reference(int arr[],int size){
    
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
     cout<<endl;
 }

 int main(){
    int arr[]={1,2,3};
    int size=3;
    reference(arr,3);
    cout<<"int main"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
 }