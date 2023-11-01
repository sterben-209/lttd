//https://ntucoder.net/Problem/Details/89
#include <iostream>
using namespace std;
int main() {
    int h,p,s;cin>>h>>p>>s;
    s++;
    if(s>=60){
        p+=s/60;
        s %= 60;
    }
    if(p>=60){
        h+=p/60;
        p%=60;
    }
    if(h>=24)h%=24;
    cout<<h<<" "<<p<<" "<<s;

    return 0;
}
    