#ifndef CONSOLE_H
#define CONSOLE_H

#include "Item.h"
#include <string>

//One of the two types of items avaliable in the store. A subclass of the item class, representing a console.
class Console : public Item{
public:

    Console();
    Console(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice);

    //Console variables
    //std::string itemTitle;
    //int consolePrice;

    //Console behaviors
    void itemDiscount();   //If the user has a membership, they will recieve a 10% discount on their console purchase.

    ~Console();

};

#endif