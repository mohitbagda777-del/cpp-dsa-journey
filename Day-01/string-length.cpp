#include<iostream>
using namespace std;
int main(){int count = 0;
    string str ="Mohit"; 
    for(int i=0;str[i]!='\0';i++) {
        count++;
    }
    cout<<"length= "<<count;
    return 0;
}
