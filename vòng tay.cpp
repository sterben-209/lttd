#include<iostream>

using namespace std;

int main(){
    int n; cin >> n; 
    int t = (n/7)%2==0?7-n%7:n%7;
    cout <<t<<" "<<7-t;

    return 0;
}