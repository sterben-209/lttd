#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("NICEROW.INP", "r", stdin);
    freopen("NICEROW.OUT", "w", stdout);

    long long n ; cin >> n; 
    long long a[n];
    set<long long> d ; 
    for(long long i = 0; i<n ; i++ ) {
        cin >> a[i];
        d.insert(a[i]);
    } 

    sort(a,a+n);
    if(d.size()<3){
        cout << 0;
        return 0 ;
    } 

    if(n%2==0 and (count(a,a+n,a[(n+1)/2])%2==0)){
        cout << 1 ; 
        return 0 ;
    }
    if(count(a,a+n,a[(n+1)/2]) % 2 == 0 ) {
        cout << 0;
        return 0;
    }
    cout << ((n % 2 == 1) ? 1 : 0);
    return 0;
}