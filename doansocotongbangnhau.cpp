// https://www.spoj.com/PTIT/problems/BCSEQ1/?

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;cin>>n;
    while(n--){
        int stt,m;cin>>stt>>m;
        bool c=true;
        int res;
        int a[m+1];a[0]=0;
        for(int i = 1;i<=m;i++) {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        
        for(int i = 1;i<=m;i++){
            if(a[m]%a[i]==0){
                c=true;
                int k=a[m]/a[i];
                for(int j=1;j<k;j++){
                    if(std::binary_search(a+i,a+m,j*a[i])==0) {
                        j = k;
                        c=false;
                        continue;
                    }
                }
                if(c==true){
                    res = a[i];
                    break;                    
                }else res=a[i];

            }
            
        }
        cout << stt << " ";
        cout << res<<endl;
    }
    return 0;
}
