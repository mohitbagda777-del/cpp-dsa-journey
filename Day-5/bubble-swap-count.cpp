# include<iostream>
# include<vector>
using namespace std;

int n,count = 0;
vector<int>arr;

void bubblesort(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    cout<<"swaping count: ";
    cout<<count<<endl;
}

void array(){
    cout<<"Descending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    cout<<"Enter number: ";
    cin>>n;

    arr.resize(n);

    for(int i=0;i<n;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    bubblesort();
    array();

    return 0;
}
