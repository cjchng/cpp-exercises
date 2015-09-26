#include <iostream>
#include "Sales_item.h"

int main() {
  std::cout << "Waiting for transactions" << std::endl;
  Sales_item total;

  // If there is an input and it is a Sales_item
  if (std::cin >> total) {

    Sales_item trans;
    // We start reading next transactions
    while (std::cin >> trans) {
      // If transaction same as total – we add it to total
      if (total.isbn() == trans.isbn()) {
        total += trans;
      // Else we print total and assign total to new transaction
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    // We need to print last entry
    std::cout << total << std::endl;
  } else {
    // User didn't privide any input
    std::cout << "You should provide sales item transactions" << std::endl;
    return -1;
  }

  return 0;
}
