# include<iostream>
# include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"your elements are ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    cout<<endl;
    cout<<"your elements after insertion sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
