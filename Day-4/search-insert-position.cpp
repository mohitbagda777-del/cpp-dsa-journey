#include<iostream>
#include<vector>
using namespace std;

 int binarysearch(vector<int>arr){
    int st=0,end= arr.size()-1;
    int mid;
    int target;

    cout<<"give a target for insertion: ";
    cin>>target;

     while(st<=end){

         int mid = st + (end - st)/2;

            if(arr[mid]<target){
                st = mid + 1;
            }
            else{
                 end = mid - 1;
            }
       }
       return st;
    } 

int main(){
    int n; 

    cout<<"Enter a number:";
    cin>> n;

    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    int result = binarysearch(arr);

    cout<<"target insert at index "<<result;

    return 0;

}
