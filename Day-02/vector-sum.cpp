#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0;
    vector<int>vec;
    cout<<"Enter number of elements:";
    cin>>n;
    
    for(int i=0;i<n;i++){int element;
        cout<<"Enter element: ";
        cin>>element;

        vec.push_back(element);
    }
    for(int i=0;i<n;i++){
        sum=sum+vec[i];
    }
    cout<<"sum is: ";
    cout<<sum;
    
    return 0;
}
