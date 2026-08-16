#include<iostream>
using namespace std;

int main(){
    int arr[10],n,i;
   
    cout<<"Enter no. of elements: ";
    cin>>n;

    int left = 0;
    int right = n-1;

    for(i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"array is:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"aftere swaping array is: ";
   while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
   }
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
