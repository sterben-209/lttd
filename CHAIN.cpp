#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//vd 1 4 5 7 9 
int main(){
    int n;cin>>n;
    vector <int> a[n];
    for(int i = 0; i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(a[0]<n-1)

    return 0;
}