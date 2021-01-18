#include "Customer.h"
#include <iostream>
#include <string>
#include <limits>

// implementation of default constructor
Customer::Customer() {
  numItemsBought = 0;
  receiptPrice = 0.00;
  checkMember = 'N';
  itemType = "?";
  itemsArray = new std::string[40];
}

Customer::Customer(int numItemsBought, float receiptPrice, char checkMember, std::string itemType, std::string* itemsArray) {
  this->numItemsBought = numItemsBought;
  this->receiptPrice = receiptPrice;
  this->checkMember = checkMember;
  this->itemType = itemType;
  this->itemsArray = itemsArray;
}

// checks if customer is a member (returns true if yes and false if no)
bool Customer::isMember(char checkMember) {

  if (checkMember == 'Y' || checkMember == 'y') {
    return true;
  }
  else if (checkMember == 'N' || checkMember == 'n') {
    return false;
  }
  else {
    return false;
    std::cout << "Invalid input. Try again." << std::endl;
  }

}

//Checks if the customer inputted yes or no for a (Y/N) type input.
char Customer::checkYesNo(std::string inputMessage){
  bool isLooping = true;
  char userInput;

  std::cout << inputMessage;

  while (!(std::cin >> userInput) || isLooping == true){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (userInput != 'y' && userInput != 'Y' && userInput != 'n' && userInput != 'N'){
       std::cout << "Invalid input." << std::endl << std::endl;
       std::cout << inputMessage;
     } else{
      isLooping = false;
      break;
    }
  }

  return userInput;
}

//Checks if the customer attempted to purchase a valid item type.
std::string Customer::checkItemInput(std::string inputMessage, bool isTypeCheck){

  bool isLooping = true;
  std::string itemType;

  std::cout << inputMessage;

  while (!(std::cin >> itemType) || (isTypeCheck == true && isLooping == true)){
    if (isTypeCheck == true){
     if (itemType != "game" && itemType != "console"){
        std::cout << "Invalid input." << std::endl << std::endl;
        std::cout << inputMessage;
      } else{
        isTypeCheck = false;
        break;
      }
    } else{
      std::cout << "Invalid input." << std::endl << std::endl;
      std::cout << inputMessage;
    }
  }

  return itemType;
}

// calculates price for one game or one console and returns the total price
float Customer::calculatePrice(int numItemsBought, std::string itemType) {

  // conditional statements to set receipt price given customer only purchases one game or one console
  if (numItemsBought == 1 && itemType == "game") {
      receiptPrice = 70.00;
      }
      else if (numItemsBought == 1 && itemType == "console") {
        receiptPrice = 300.00;
      }
      else {
        receiptPrice = 0.00;
      }
    return receiptPrice;

}

float Customer::calculateBundlePrice(int numItemsBought, std::string* itemsArray, float receiptPrice){

  std::string gameone = "game1";
  std::string gametwo = "game2";
  std::string gamethree = "game3";
  std::string gamefour = "game4";

  std::string consoleone = "NintendoSwitch";
  std::string consoletwo = "PS4";
  std::string consolethree = "Xbox One";
  std::string consolefour = "PC";

  for (int i=0; i<numItemsBought; i++) {
    //if (itemType == "game") {
      if ((itemsArray[i] == gameone)||(itemsArray[i] == gametwo)||(itemsArray[i]==gamethree)||(itemsArray[i]==gamefour)){
      itemsArray[i] = itemType;
      receiptPrice = receiptPrice + 70.00;
    }
    //else if (itemType == "console") {
           if ((itemsArray[i] == consoleone)||(itemsArray[i] == consoletwo)||(itemsArray[i]==consolethree)||(itemsArray[i]==consolefour)){
      itemsArray[i] = itemType;
      receiptPrice = receiptPrice + 300.00;
    }
  }

    return receiptPrice;

}

// sets number of items purchased by the customer
void Customer::setnumItemsBought(int numItems) {
  numItemsBought = numItems;
}

// gets number of items bought
int Customer::getnumItemsBought() {
  return numItemsBought;
}

// gets the items array
std::string* Customer::getItemsArray() {
  return itemsArray;
}

// adds a new item A to the items array
void Customer::addItemtoArray(std::string A) {
  itemsArray[numItemsBought] = A;
  numItemsBought++;
}

// gets the total receipt price of all the items bought
int Customer::getReceiptPrice() {
  return receiptPrice;
}

// implementation of class destructor
Customer::~Customer() {

}
