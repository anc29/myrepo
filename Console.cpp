#include "Console.h"
#include <math.h>

//Defaut constructor implementation
Console::Console() : Item(){

}

//Parameter constructor implementation
Console::Console(std::string itemType, int itemQuantity, std::string itemTitle, float itemPrice) : Item(itemType, itemQuantity, itemTitle, itemPrice){

}

//Console behaviour implementations
void Console::itemDiscount(){
    if (itemPrice >= 0){
        itemPrice = itemPrice * 0.9;
        itemPrice = roundf(itemPrice * 100)/100;
    }
}

//Default destructor implementation
Console::~Console(){
}