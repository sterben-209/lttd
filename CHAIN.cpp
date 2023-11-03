# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

int main() {
	int n, s=0;
	cin >> n;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	n -= 1;
	for (int i=0; v[i]<=n-1; i++) {
	    n -= v[i] + 1;
	    s += v[i];
	}
	cout << s + n;
}