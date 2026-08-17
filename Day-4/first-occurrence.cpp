#include<iostream>
#include<vector>
using namespace std;

int target;
 int binarysearch(vector<int>arr){
    int st=0,end= arr.size()-1;
    int mid,ans;
    int target;

    cout<<"give a target for searching: ";
    cin>>target;

     while(st<=end){

         int mid = st + (end - st)/2;

            if(arr[mid]<target){
                st = mid + 1;
            }
            else if(arr[mid]>target){
                 end = mid - 1;
            }
            else{
             ans = mid;
             end = mid - 1;
            }
       }
       return ans;
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

    if(result != -1){
        cout<< "Target's 1st occurence at index  "<<result<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
   
    return 0;

}
