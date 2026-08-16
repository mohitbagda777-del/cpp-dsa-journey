#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i;
    int count = 0,ele=0;

    cout<<"Enter no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
  
    for(i=0;i<n;i++){
        if(arr[i]<0){
           
            ele=ele+1;
        }
        else{
           
           count=count+1;
        }
    }
   
    cout<<"Positive no."<<count<<endl;
    cout<<"Negative no."<<ele<<endl;
    
    return 0;
}
