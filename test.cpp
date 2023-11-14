#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
  int stt,m;cin>>stt>>m;
  cout << stt << " ";
  int a[m];a[0]=0;
  for(int i = 1;i<n+1;i++) {
      int tmp;cin>>tmp;
      a[i]=a[i-1]+tmp;
  }

  return 0;
}
