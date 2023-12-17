// https://vn.spoj.com/problems/NKNUMFRE/
#include <bits/stdc++.h>

using namespace std; 

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main (){
    std::ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    int cnt = 0 ; 
    int a , b ; cin >> a >> b; 
    for(int i = a ; i<=b;i++){
        string str = to_string(i);
        reverse(str.begin(),str.end());
        int tmp = stoi(str);
        if(gcd(i,tmp)==1) cnt++;
    }
    cout << cnt;
    
    return 0 ; 
}