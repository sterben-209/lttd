// https://ntucoder.net/Problem/Details/3323

#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;int a[n],cnt=1,m;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i]>=cnt)cnt++;
    }
    cout << cnt ;
    return 0;
}
    