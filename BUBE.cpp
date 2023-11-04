// https://ntucoder.net/Problem/Details/48

#include <iostream>
#include<algorithm>
using namespace std;
long long  a[100000000];
int main() {
    int n,k;cin>>n>>k;
    long long  res=0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<>());
    int i=0,j=0;
    while(i<n){
        if(a[i]+k<=a[j]){
        
            j++;
        }else{
        
           res+=a[i];
        
        }
        i++;
    }
    cout <<res;
    return 0;
}