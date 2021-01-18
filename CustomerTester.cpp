#include "Customer.h"
#include "Shop.h"
#include <iostream>
#include <string>

int main() {

  Customer c1;

  // testing isMember function for inputs 'Y', 'y' (returns true), 'N', 'n' (returns false) and 'A' (incorrect input - returns error message)
  std::cout << "isMember function: test 1" << std::endl;
  if (c1.isMember('Y') == true) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  std::cout << "isMember function: test 2" << std::endl;
  if (c1.isMember('y') == true) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  std::cout << "isMember function: test 3" << std::endl;
  if (c1.isMember('N') == false) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  std::cout << "isMember function: test 4" << std::endl;
  if (c1.isMember('n') == false) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  std::cout << "isMember function: test 5" << std::endl;
  if (c1.isMember('A') == false) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing calculatePrice function for different inputs

  // test for 1 game
  std::cout << "calculatePrice function: test 1 (game)" << std::endl;
  if (c1.calculatePrice(1, "game") == 70) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // test for 1 console
  std::cout << "calculatePrice function: test 2 (console)" << std::endl;
  if (c1.calculatePrice(1, "console") == 300) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing calculateBundlePrice function for different inputs - create items array with one game and one console
  std::string* itemsArray = new std::string[2];
  itemsArray[0] = "game";
  itemsArray[1] = "console";

  std::cout << "calculateBundlePrice function: test" << std::endl;
  c1.calculateBundlePrice(2, itemsArray, 370.00);
  if (c1.calculateBundlePrice(2, itemsArray, 370.00) == 370.00) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing setnumItemsBought and getnumItemsBought function
  std::cout << "setnumItemsBought and getnumItemsBought functions: test 1" << std::endl;
  c1.setnumItemsBought(10);
  if (c1.getnumItemsBought() == 10) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing boundary case 0
  std::cout << "setnumItemsBought and getnumItemsBought functions: test 2 (boundary case - minimum)" << std::endl;
  c1.setnumItemsBought(0);
  if (c1.getnumItemsBought() == 0) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing boundary case as maximum items purchased is 50
  std::cout << "setnumItemsBought and getnumItemsBought functions: test 3 (boundary case - maximum)" << std::endl;
  c1.setnumItemsBought(49);
  if (c1.getnumItemsBought() == 49) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing addItemtoArray function for game
  std::cout << "addItemtoArray function: test 1" << std::endl;
  c1.addItemtoArray("gameone");
  if (itemsArray[0] == "game") {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing addItemtoArray function for console (assuming user buys one game then one console)
  std::cout << "addItemtoArray function: test 2" << std::endl;
  c1.addItemtoArray("consoleone");
  if (itemsArray[1] == "console") {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing getItemsArray function - should return array of one console and one game
  //std::cout << "getItemsArray: test" << std::endl;
  //std::cout << "Expected memory address: " << c1.getItemsArray() << "\n" << std::endl;

  // testing getReceiptPrice function when items array is empty - should return 0
  std::cout << "getReceiptPrice: test" << std::endl;
  if (c1.getReceiptPrice() == 300) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
    std::cout << c1.getReceiptPrice() << std::endl;
  }


}
