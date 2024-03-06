#include <iostream>


void fibonacci(int n) {
  int a = 0, b = 1, c = 0;

  for (int i = 0; i < n; i++) {
    std::cout << c << '\n';

    c = a + b;
    a = b;
    b = c;
  }
}

int main() {
  fibonacci(20);
}