#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i,num;
    bool found = false;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"Enter a element for sreaching: ";
    cin>> num ;
   
    for(i=0;i<n;i++){
       if(arr[i]==num){
        cout<<"element is found at index: ";
        cout<<i;
        found = true;
       }
    }
    if(found == false){
        cout<<"not found.";
    }
    
    return 0;
}
