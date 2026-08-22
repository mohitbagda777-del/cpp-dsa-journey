#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int>arr(n);

void sorting(){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }

    for(int i=0;i<count;i++){
        arr[i] = 0;
    }

    for(int i = count;i<n;i++){
        arr[i] = 1;
    }

}

void array(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter a number: ";
    cin>>n;

    arr.resize(n);

    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    cout<<"sorted array: ";
    sorting();
    array();

    return 0;
}
