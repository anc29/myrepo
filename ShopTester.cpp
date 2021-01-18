#include "Shop.h"
#include <iostream>
#include <string>

int main() {

  Shop s1;

  // testing setName and getName with string 
  s1.setName("Gamestop");
  std::cout << "setName and getName: test" << std::endl;
  if (s1.getName() == "Gamestop") {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing setSuburb and getSuburb with string
  s1.setSuburb("Roxby Downs");
  std::cout << "setSuburb and getSuburb: test" << std::endl;
  if (s1.getSuburb() == "Roxby Downs") {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

  // testing setPostcode and getPostcode with new number
  s1.setPostcode(4000);
  std::cout << "setPostcode and getPostcode: test" << std::endl;
  if (s1.getPostcode() == 4000) {
    std::cout << "TEST PASSED!\n" << std::endl;
  }
  else {
    std::cout << "TEST FAILED!\n" << std::endl;
  }

}
