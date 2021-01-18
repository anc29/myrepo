#include "Item.h"

//Default item constructor implementation
Item::Item(){

    itemType = "Unkown type";
    itemQuantity = 0;
    itemTitle = "Unkown title";
    itemPrice = 20.00;
    itemPurchased = 0;

}

//Parameter item constructor implementation
Item::Item(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice){
    this->itemType = itemType;
    this->itemQuantity = itemQuantity;
    this->itemTitle = itemTitle;
    this->itemPrice = itemPrice;
    itemPurchased = 0;
}

//Item behaviour implementations
void Item::addItem(){
    itemPurchased += 1;
}

//Item setters
void Item::setItemQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}

//Item getters
int Item::getItemQuantity(){
    return itemQuantity;
}

std::string Item::getItemTitle(){
    return itemTitle;
}

float Item::getItemPrice(){
    return itemPrice;
}

int Item::getItemPurchased(){
    return itemPurchased;
}

//Default destructor implementation
Item::~Item(){
}