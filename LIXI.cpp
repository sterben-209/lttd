// https://ntucoder.net/Problem/Details/2252
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,s=0,c=1; cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a,b; cin >> a>>b;
        if(b>0){
            s+=a;
            c+=b-1;
        } 
        else v.push_back(a);
    }
    int t = v.size();
    int m = std::min(c,t); 
    sort(v.begin(),v.end(),greater<>());
    for(int i = 0; i < m ; i++){
        s+= v[i];
    }
    cout<<s;
    return 0;
}