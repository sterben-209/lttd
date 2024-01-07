#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("KHIEUVU.INP","r",stdin);
    //freopen("KHIEUVU.OUT","w",stdout);
    int n, k, res = 0; cin >> n >> k ; 
    vector<int> nam , nu ; 
    for(int i = 0 ; i < n ; i++){
        int tmp ; cin >> tmp ; 
        if(tmp >0 ) nam.push_back(tmp);
        else nu.push_back(tmp);
    }
    sort(nam.begin(),nam.end());
    sort(nu.begin(),nu.end(),greater<>());
    for(int i = 0 ; i < n ; i++ ){
        int tmp = lower_bound(nu.begin()+i,nu.end(),-nam[i]-k)-nu.begin()-i;
        res += tmp - i ; 
    }
    cout <<  res ; 
    return 0 ;
}