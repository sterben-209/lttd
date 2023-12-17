#include<bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie();
    long long n ; cin >> n ; 
    int i = 2 ;
    string res = "";
    long long tmp=0 ;   
    for(long long i = 2 ; i <= n ;i++){
        tmp = 0 ;
        while(n%i==0){
            tmp++;
            n/=i;
        }
        if (tmp !=0) res += to_string(i) + " " + to_string(tmp)+ "\n" ;
    }
    cout << res; 
    return 0 ; 
}