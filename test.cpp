#include <algorithm>
#include <vector>
#include <iostream>

int main() {
  std::vector<int> v = {1, 3, 5, 7, 9};

  // Tìm vị trí của số 7
  auto it = std::binary_search(v.begin(), v.end(), 7);

  // Tính toán khoảng cách giữa iterator đầu tiên của vector và iterator của số 7
  int index = std::distance(v.begin(), it);

  // Cout khoảng cách
  std::cout << index << std::endl;

  return 0;
}
