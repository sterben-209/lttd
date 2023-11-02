// https://ntucoder.net/Problem/Details/1149
#include <algorithm>
#include <math.h>
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int c=0,n,m;cin>>n>>m;
    string s = "";
    while((m>0 and n>1) or (n>0 and m>1)){
        if(n>m){
            c++;
            n-=2;
            m--;
            s+="2 1 \n";
            continue;
        }
        if(m>=n){
            c++;
            m-=2;
            n--;
            s+="1 2 \n";
            continue;
        }
    }
    cout<<c<<endl;
    cout << s; 
    return 0;
}
    