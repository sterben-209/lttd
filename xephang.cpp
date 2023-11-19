#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n), c(n);
    int tmp;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
 
    if (n % 2 == 0) {
        // Xá»­ lÃ½ cho sá» cháºµn
        tmp = find(a.begin(), a.end(), 0) - a.begin();
        c[1] = b[tmp];
        for (int i = 3; i < n; i += 2) {
            tmp = find(a.begin(), a.end(), b[tmp]) - a.begin();
            c[i] = b[tmp];
            a.pop(tmp);
            b.pop(tmp);
        }
 
        tmp = find(b.begin(), b.end(), 0) - b.begin();
        c[n - 2] = a[tmp];
        for (int i = n - 4; i >= 0; i -= 2) {
            tmp = find(b.begin(), b.end(), a[tmp]) - b.begin();
            c[i] = a[tmp];
        }
    } else {
        // Xá»­ lÃ½ cho sá» láº»
        for (int i = 0; i < n; i++) {
            if (count(b.begin(), b.end(), a[i]) == 0) {
                c[0] = a[i];
                break;
            }
        }
 
        for (int i = 2; i <= n; i += 2) {
            tmp = find(a.begin(), a.end(), c[i - 2]) - a.begin();
            c[i] = b[tmp];
        }
 
        tmp = find(a.begin(), a.end(), 0) - a.begin();
        c[1] = b[tmp];
        for (int i = 3; i < n; i += 2) {
            tmp = find(a.begin(), a.end(), b[tmp]) - a.begin();
            c[i] = b[tmp];
        }
    }
 
    // In ra káº¿t quáº£
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
 
    return 0;
}
 