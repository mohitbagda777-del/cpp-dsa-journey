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
    cout<<"sum of array is: ";
    int sum = 0;
    for(i=0;i<n;i++){
       sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}
