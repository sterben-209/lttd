#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false); // Disable synchronization between C and C++ standard streams
    static long long cnt=0,n,s=0;
    while(std::cin>>n){
        s+=n;
        cnt++;
    }
    std::cout << s - cnt;
    return 0;
}
