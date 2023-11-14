// https://www.spoj.com/PTIT/problems/BCSEQ1/?

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;cin>>n;
    while(n--){
        int stt,m;cin>>stt>>m;
        cout << stt << " ";
        int a[m];a[0]=0;
        for(int i = 1;i<=n;i++) {
            int tmp;cin>>tmp;
            a[i]=a[i-1]+tmp;
        }
        int i = 1; 
        while(i<=n){
            
        }

    }
    return 0;
}
