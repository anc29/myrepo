#include "Game.h"
#include <math.h>
#include <iostream>

//Defaut constructor implementation
Game::Game() : Item(){

}

//Parameter constructor implementation
Game::Game(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice) : Item(itemType, itemQuantity, itemTitle, itemPrice){

}

//Game behaviour implementations
void Game::itemDiscount() {
    if (itemPrice >= 0) {
        itemPrice *= 0.95;
        itemPrice = roundf(itemPrice * 100)/100;
    }
}

//Default destructor implementation
Game::~Game(){
}