#include <iostream>



int main(void) {
  typedef char custom_type;

  custom_type n = -1;

  for (
    custom_type i = 0, mask = (custom_type)(1 << (sizeof(custom_type) * 8 - 1));
    i < (custom_type)sizeof(custom_type) * 8;
    mask = (custom_type)1 << (sizeof(custom_type) * 8 - 1 - ++i)
    ) {
    if (i && i % 4 == 0)
      putchar(' ');
    putchar(mask & n ? '1' : '0');
  } putchar('\n');
}
