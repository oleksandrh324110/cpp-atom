#include <iostream>
#include <array>
#include <cmath>

struct MaxAndMin {
  int max, min;
};

template<typename T, size_t size>
MaxAndMin findMaxAndMin(std::array<T, size> arr) {
  MaxAndMin res = { arr[0], arr[0] };

  for (size_t i = 1; i < arr.size(); i++) {
    res.max = std::max(res.max, arr[i]);
    res.min = std::min(res.min, arr[i]);
  }

  return res;
}

int main(void) {
  std::array<int, 10> arr = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8 };

  MaxAndMin res = findMaxAndMin(arr);

  std::cout << "max in arr: " << res.max << "\nmin in arr: " << res.min << '\n';
}