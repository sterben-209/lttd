// https://www.spoj.com/PTIT/problems/BCSEQ1/?

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;cin>>n;
    while(n--){
        int stt,m;cin>>stt>>m;

        int max = 0;
        int a[m+1];a[0]=0;
        for(int i = 1;i<=m;i++) {
            cin>>a[i];
            if(a[i]>max)max=a[i];
            a[i]+=a[i-1];
        }
        cout << stt << " ";
        if(a[m]%max==0)cout<<max;
        else cout<<a[m]<<endl;

    }
    return 0;
}
