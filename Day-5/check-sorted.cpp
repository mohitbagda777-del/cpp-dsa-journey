#include<iostream>
# include<vector>
using namespace std; 
int main(){
    int n;
    bool found = true;
    cout<<"enter a number: ";
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cout<<"Enter a element: ";
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        found = false;
        break;
       }
    }

    if(found == true){
        cout<<"Array is sorted in ascending order.";
    }
    else{
        cout<<"Array is not sorted in ascending order.";
    }

    return 0;

}
