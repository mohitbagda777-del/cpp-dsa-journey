#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i;
    int max = arr[0];
    int secondmax = arr[0];
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax && arr[i]<max){
            secondmax = arr[i];
        }
    }
    if(secondmax == arr[0]){
        cout<<"second max is not found "<<endl;
    }
    else{
        cout<<endl<<"second max is: "<<secondmax;
    }
  
    return 0;
}
