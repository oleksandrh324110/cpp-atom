#include <iostream>
#include <cmath>

long long unsigned int factorial(int n) {
  if (n == 1) return 1;
  return n * factorial(n - 1);
}

int main(void) {
  std::cout << factorial(-5) << '\n';
}