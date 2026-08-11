#include<iostream>
using namespace std;
int main(){
    int a,b,sum,product,difference;
    float division;
    cout << "enter value of a: " ;
    cin >> a;
    cout << "enter value of b: " ;
    cin >> b;

    sum = a+b;
    difference = a-b;
    division =(float) a/b;
    product = a*b;

    cout << "sum = " << sum << endl;
    cout << "difference= " << difference << endl;
    cout << "division = " << division << endl;
    cout << "product = " << product << endl;

    return 0;
}
