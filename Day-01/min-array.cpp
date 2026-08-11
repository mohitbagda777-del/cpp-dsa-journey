#include<iostream>
using namespace std;
int main(){
    int arr[50],n,i;
    cout<<"Enter number of elements: ";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"Enter array elements:";
        cin>>arr[i];
    }
    int min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        
    }
     cout<<"minimum element is:";
     cout<<min<<endl;

    return 0;
}
