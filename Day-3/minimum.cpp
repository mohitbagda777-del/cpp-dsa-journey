#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"minimum element is:";
    int min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else{
            min;
        }
    }
    cout<<min;
    return 0;
}
