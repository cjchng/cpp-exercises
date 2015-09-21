#include <iostream>
#include "Sales_item.h"

int main() {
  std::cout << "Please, enter two books with same ISBN" << std::endl;

  Sales_item book1, book2;
  std::cin >> book1 >> book2;
  if (book1.isbn() == book2.isbn()) {
    std::cout << "Your book sum is: " << book1 + book2 << std::endl;
  } else {
    std::cout << "You entered two different books" << std::endl;
  }

  return 0;
}
