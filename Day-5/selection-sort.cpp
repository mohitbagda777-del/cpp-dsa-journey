# include<iostream>
using namespace std;
int arr[100];
int n;
void selectionsort(){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
         swap(arr[i],arr[minindex]);
    }
}
void array(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"Array after sorting: ";
    selectionsort();
    array();
    return 0;
}
