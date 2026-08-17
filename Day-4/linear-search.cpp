#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;

    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    
    int target;
    cout<<"give a target for searching: ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"target found at "<<i<<endl;
            return 0;
        }
    }
    cout << "Target not found" << endl;
    return 0;

}
