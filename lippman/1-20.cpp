#include <iostream>
#include "Sales_item.h"

int main() {
  std::cout << "Please, enter book info" << std::endl;

  Sales_item book;
  std::cin >> book;
  std::cout << "Your book is: " << book << std::endl;

  return 0;
}
