#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
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
    cout<<"sorted vector is: ";

    sort(vec.begin(), vec.end());
     for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}
