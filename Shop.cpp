#include "Shop.h"
#include <iostream>
#include <string>

// implementation of default constructor
Shop::Shop() {
  name = "EB Games";
  suburb = "";
  postcode = 0;
}

Shop::Shop(std::string newName, std::string newSuburb, int newPostcode) {
  name = newName;
  suburb = newSuburb;
  postcode = newPostcode;
}

void Shop::setName(std::string newName) {
  name = newName;
}

std::string Shop::getName() {
  return name;
}

void Shop::setSuburb(std::string newSuburb) {
  suburb = newSuburb;
}

std::string Shop::getSuburb() {
  return suburb;
}

void Shop::setPostcode(int newPostcode) {
  postcode = newPostcode;
}

int Shop::getPostcode() {
  return postcode;
}

Shop::~Shop() {
  
}

