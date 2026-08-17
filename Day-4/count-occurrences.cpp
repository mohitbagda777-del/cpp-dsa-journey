#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,count = 0;
    int element,target;

    cout<<"Enter a number:";
    cin>> n;

    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    cout<<"Enter target: ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count += 1;
        }
        else{
            count;
        }
    }
    
    cout<<"target occures "<<count<<" times";
   
    return 0;
    
}
