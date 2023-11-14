// https://ntucoder.net/Problem/Details/5523
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int n; cin >> n; 
    int a[n];
    for(int i=0; i<n;i++) {
       cin >> a[i]; 
    } 
    int c1 = std::count(a,a+n,1);
    int c2 = std::count(a,a+n,2);
    int c3 = std::count(a,a+n,3);
    int c4 = n - c1 - c2 - c3;
    int tmp = min(c1,c3);
    c4 += tmp;
    c1 -= tmp;
    c3 -= tmp;
    c4 += ceil((1*c1+2*c2)/4.0);
    c4 += c3;
    // if((c1==1 or c1==2 ) and c2==1 and c3 == 0 ) c4 = 1;
    cout << c4; 

    return 0;
}
