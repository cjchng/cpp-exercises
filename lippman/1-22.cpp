#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item currBook;
  if (std::cin >> currBook) {
    Sales_item book;
    while (std::cin >> book && book.isbn() == currBook.isbn()) {
      currBook += book;
      std::cout << "Current sum for books you entered is: " << currBook << std::endl;
    }
    std::cout << "Final sum for books you entered is: " << currBook << std::endl;
  }
  return 0;
}
