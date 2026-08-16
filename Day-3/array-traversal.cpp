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
    cout<<"array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
