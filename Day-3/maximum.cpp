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
    cout<<"maximum element is:";
    int max =arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else{
            max;
        }
    }
    cout<<max;
    return 0;
}
