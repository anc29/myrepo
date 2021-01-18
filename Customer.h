#pragma once
#include "Shop.h"

class Customer {

    public:

    Customer();
    Customer(int, float, char, std::string, std::string*);
    ~Customer();

    // attributes
    int numItemsBought;
    float receiptPrice;
    char checkMember;
    std::string itemType;
    std::string* itemsArray;

    // methods
    bool isMember(char checkMember);
    char checkYesNo(std::string inputMessage);
    std::string checkItemInput(std::string inputMessage, bool isTypeCheck);

    float calculatePrice(int numItemsBought, std::string itemType);
    float calculateBundlePrice(int numItemsBought, std::string* itemsArray, float receiptPrice);

    // setters
    void setnumItemsBought(int);
    void addItemtoArray(std::string);

    // getters
    int getnumItemsBought();
    std::string* getItemsArray();
    int getReceiptPrice();

};


