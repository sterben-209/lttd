// https://ntucoder.net/Problem/Details/116

#include <iostream>
using namespace std;
int main() {
    int n,m;cin>>n>>m;
    if(m%2!=0){
        cout << -1;
        return 0;
    }
    if(m>4*n){
        cout << -1 ; 
        return 0;
    }
    if(m<2*n){
        cout <<-1;
        return 0;
    }
    if(m==2*n) {
    	cout << n << " " << 0; 
    	return 0 ;
    } 
    if(n == 4*m){
    	cout << 0 << " " << n ; 
        return 0;
    }
    cout<<n-(m-2*n)/2<<" "<<(m-2*n)/2;

    return 0;
}
    