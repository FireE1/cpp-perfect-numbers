#include <climits>
#include <iostream>
#include <ostream>

bool Calc(const int num) {
  const int half = num / 2;
  int div = 1;
  int div_sum = 0;

  while (div_sum < num && div < half) {
    if (num % div == 0) {
      div_sum += div;
    }
    div += 1;
  }

  div_sum += half;
  if (div_sum == num) {
    return true;
  }

  return false;
}

int main() {
  uint num = 2;

  while (num < UINT_MAX) {
    if (Calc(num)) {
      std::cout << num << "\n";
    }
    num += 2;
  }

  std::cout << std::endl;
  return 0;
}
