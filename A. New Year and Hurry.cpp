// https://codeforces.com/contest/750/problem/A
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,k; cin>>n>>k;
    k = 240 - k;
    float c = -(k*2.0)/5;
    float d = 1 - 4*c;
    if (d<=0){
        cout << 0 ;
        return 0;
    }else{
        long x1 = (-1+sqrt(d))/2;
        long x2 = (-1-sqrt(d))/2;
        if(x1 >= 0 and abs(x1) < abs(x2)){
            if(x1<n) cout << x1;
            else cout << n;
        } 
        else {
            if(x2<n)cout<<x2;
            else cout<<n;
        }
    }

    return 0;
}