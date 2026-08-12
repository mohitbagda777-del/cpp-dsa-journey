#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,count=0;
    vector<int>vec;
    cout<<"Enter number of elements:";
    cin>>n;
    
    for(int i=0;i<n;i++){int element;
        cout<<"Enter element: ";
        cin>>element;

        vec.push_back(element);
    }

    cout<<"Elements are: ";

    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Even numbers are: ";
    for(int i=0;i<n;i++){
        if(vec[i]%2==0){
            count++;
        }
        else{
            count;
        }
    }
    cout<<count;

    return 0;
}
