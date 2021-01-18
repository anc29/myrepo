#ifndef GAME_H
#define GAME_H

#include "Item.h"
#include <string>

//One of the two types of items avaliable in the store. A subclass of the item class, representing a game.
class Game : public Item{
public:

    Game();
    Game(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice);

    //Game variables
    //std::string itemType;
    //int gamePrice;

    //Game behaviours
    void itemDiscount(); //If the user has a membership, they will recieve a 5% discount on their game purchase.

    ~Game();

};

#endif