#include <iostream>
#include <math.h>
#include <string>

#include "Item.h"
#include "Console.h"
#include "Game.h"

/*
void findDiscount(Item *chosenItem){

    chosenItem->itemDiscount();

}
*/


int main(){

    float tolerance = 0.00001;

    //Testing itemDiscount (Game version). The fourth parameter of the Game constructor is lowered by 5% using itemDiscount(). This value can then be returned using getItemPrice().
    Game gameA = Game("game", 5, "gameA", 70.00);
    Game gameB = Game("game", 5, "gameB", 59.95);
    Game gameC = Game("game", 5, "gameC", 157.5);
    Game gameD = Game("game", 5, "gameC", 0);
    Game gameE = Game("game", 5, "gameC", -20.75);

    gameA.itemDiscount();
    gameB.itemDiscount();
    gameC.itemDiscount();
    gameD.itemDiscount();
    gameE.itemDiscount();

    if (gameA.getItemPrice() != 66.5){
        std::cout << "Test 1 failed!" << std::endl;
        std::cout << gameA.getItemPrice() - 66.5 << std::endl;
    }

    if (abs(gameB.getItemPrice() - 56.95) >= tolerance){
        std::cout << "Test 2 failed!" << std::endl;
        std::cout << gameB.getItemPrice() - 56.9525 << std::endl;
    }

    if (abs(gameC.getItemPrice() - 149.63) >= tolerance){
        std::cout << "Test 3 failed!" << std::endl;
        std::cout << gameC.getItemPrice() - 149.625 << std::endl;
    }

    if (abs(gameD.getItemPrice() - 0) >= tolerance){
        std::cout << "Test 4 failed!" << std::endl;
        std::cout << gameD.getItemPrice() - 0 << std::endl;
    }

    if (abs(gameE.getItemPrice() - (-20.75)) >= tolerance){
        std::cout << "Test 5 failed!" << std::endl;
        std::cout << gameE.getItemPrice() - (-20.75) << std::endl;
    }

    //Testing itemDisount (Console version). The fourth parameter of the Console constructor is lowered by 10% using itemDiscount(). This value can then be returned using getItemPrice().
    Console consoleA = Console("console", 10, "consoleA", 525.00);
    Console consoleB = Console("console", 10, "consoleB", 796.32);
    Console consoleC = Console("console", 10, "consoleC", 98.77);
    Console consoleD = Console("console", 10, "consoleC", 0);
    Console consoleE = Console("console", 10, "consoleC", -387.65);

    consoleA.itemDiscount();
    consoleB.itemDiscount();
    consoleC.itemDiscount();
    consoleD.itemDiscount();
    consoleE.itemDiscount();

    if (consoleA.getItemPrice() != 472.5){
        std::cout << "Test 6 failed!" << std::endl;
        std::cout << consoleA.getItemPrice() - 472.5 << std::endl;
    }

    if (abs(consoleB.getItemPrice() - 716.69) >= tolerance){
        std::cout << "Test 7 failed!" << std::endl;
        std::cout << consoleB.getItemPrice() - 716.688 << std::endl;
    }

    if (abs(consoleC.getItemPrice() - 88.89) >= tolerance){
        std::cout << "Test 8 failed!" << std::endl;
        std::cout << consoleC.getItemPrice() - 88.893 << std::endl;
    }

    if (abs(consoleD.getItemPrice() - 0) >= tolerance){
        std::cout << "Test 9 failed!" << std::endl;
        std::cout << consoleD.getItemPrice() - 0 << std::endl;
    }

    if (abs(consoleE.getItemPrice() - (-387.65)) >= tolerance){
        std::cout << "Test 10 failed!" << std::endl;
        std::cout << consoleE.getItemPrice() - (-387.65) << std::endl;
        std::cout << consoleE.getItemPrice() << std::endl;
    }


    /*
    Input validation for bad input:
    #include <limits>

    std::cin >> inputVariable;
    if (!std::cin){
        std::cin.clear();
        std::cin.ignore();

        std::cout << "Bad input." << std::endl;
    }

    Note: The input using std::cin can be located inside the brackets.
    */


    /*
    //Assigning new variables
    std::string newItemType = "Game";
    int newItemQuantity = 5;
    std::string newItemTitle = "First game";
    float newItemPrice = 59.95;

    //Creating new Game object and displaying pre-discount information
    Game *gameA = new Game(newItemType, newItemQuantity, newItemTitle, newItemPrice);

    std::cout << "Game title: " << gameA->getItemTitle() << std::endl;
    std::cout << "Quantity remaining: " << gameA->getItemQuantity() << std::endl;
    std::cout << "Original price: " << gameA->getItemPrice() << std::endl;

    //Assinging discount and displaying new price.
    gameA->itemDiscount();
    std::cout << "Price after discount: " << roundf(gameA->getItemPrice() * 100) / 100 <<  "     Expected: " << roundf(newItemPrice * 0.95 * 100) / 100 << std::endl << std::endl;

    delete gameA;


    //Creating new Console object and displaying pre-discount information
    newItemType = "Console";
    newItemQuantity = 10;
    newItemTitle = "PS4";
    newItemPrice = 543.95;

    Console *consoleA = new Console(newItemType, newItemQuantity, newItemTitle, newItemPrice);

    std::cout << "Console title: " << consoleA->getItemTitle() << std::endl;
    std::cout << "Quantity remaining: " << consoleA->getItemQuantity() << std::endl;
    std::cout << "Original price: " << consoleA->getItemPrice() << std::endl;

    //Assigning discount and displaying new price.
    consoleA->itemDiscount();
    std::cout << "Price after discount: " << roundf(consoleA->getItemPrice() * 100) / 100 << "     Expected: " << roundf(newItemPrice * 0.9 * 100) / 100 << std::endl;

    delete consoleA;
    */


    return 0;
}