#include<iostream>
#include<vector>
using namespace std;

 int target;
 int first_occurence,last_occurence;
 int count; 
 int mid,ans;
 

 int first(vector<int>arr){
     int st=0,end= arr.size()-1;

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

    int second(vector<int>arr){
         int st=0,end= arr.size()-1;
          
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
             st = mid + 1;
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
    count = second(arr) - first(arr) + 1;

    cout<<"first occurence is "<<first(arr)<<endl;
    cout<<"second occurence is "<<second(arr)<<endl;
    cout<<"target occures "<<count;

    return 0;

}
