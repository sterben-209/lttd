#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("KHIEUVU.INP","r",stdin);
    //freopen("KHIEUVU.OUT","w",stdout);
    int n,k ; cin >> n >> k;
    map<int,int>nam,nu;
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        int tmp ; cin >> tmp ;
        if ( tmp > 0 ) nam[tmp]++ ;
        else nu[tmp]++;
    }
    vector<pair<int,int>>nam1(nam.begin(),nam.end());
    std::sort(nam1.begin(), nam1.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.first < b.first;
    });
    vector<pair<int,int>>nu1(nu.begin(),nu.end());
    std::sort(nu1.begin(), nu1.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.first > b.first;
    });

    // for(int i = 0 ; i < nam1.size();i++){
    //     cout << nam1[i].first << ":" << nam1[i].second << endl;
    // }
    // for(int i = 0 ; i < nu1.size();i++){
    //     cout << nu1[i].first<< ":" << nu1[i].second << endl; 
    // }


    cout << cnt ;
    return 0 ;
}