# include<iostream>
using namespace std;
int arr[100];
int n;
void bubblesort(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubblesort();
    array();
    return 0;
}
