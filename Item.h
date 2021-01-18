#ifndef ITEM_H
#define ITEM_H

#include <string>

//Abstract class representing each item in the store. Superclass for the two types of items, consoles and games.
class Item{
public:

    Item();
    Item(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice);

    //Item variables
    std::string itemType;
    int itemQuantity;
    std::string itemTitle;
    float itemPrice;
    int itemPurchased;

    //Item behaviours
    virtual void itemDiscount() = 0;   //Pure virtual function. A discount will be calculated based on which of this class's subclasses is present. If the item's price is negative, no discount is applied.

    void addItem();                     //Adds one to a given game or console object's quantity variable.

    void setItemQuantity(int itemQuantity); //Updates the item quantity variable.

    int getItemQuantity();              //Returns the item quantity variable.
    std::string getItemTitle();         //Returns the item title variable.
    float getItemPrice();               //Returns the item price variable.
    int getItemPurchased();             //Returns the number of the current item being purchased.


    ~Item();

};

#endif