// https://ntucoder.net/Problem/Details/99

#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main() {
    int n ; cin >> n;
    if(n==0){
        cout<<0;return 0;
    }
    int t = floor(log2(n)) +1;
    string bit = std::bitset <64> (n).to_string();
    for(long i = 64 - t; i<= 63;i++){
        cout<<bit[i];
    }

    return 0;
}
    