#include "Supplier.h"
#include "Supply1.h"
#include "Supply2.h"
#include "Item.h"
#include "Game.h"
#include "Console.h"
#include <iostream>
#include <string>


int main(){

    // testing polymorphic behaviour

    // supply1 and supply2 (inherit from supplier)

    // supply1: getters
    Supply1 Sega("Sega","50 Rundle Mall","5000",400);

    std::cout << "SUPPLY1 TESTING" << std::endl;

    // getting requested stock (currently 0)
    std::cout << "\ngetrequested()" << std::endl;
    int requested = Sega.getrequested();
    if (requested!=0){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (requested==0){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // setting requested stock
    std::cout << "\nsetrequested(int)" << std::endl;
    int dummystock = 321;
    Sega.setrequested(dummystock);
    if (Sega.getrequested()!=321){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (Sega.getrequested()==321){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // getting name of supply1
    std::cout << "\ngetName()" << std::endl;
    std::string suppname = Sega.getName();
    if (suppname!="Sega"){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (suppname=="Sega"){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // return stockCount of supply1
    std::cout << "\ncountInventory()" << std::endl;
    int countInv = Sega.countInventory();
    if (countInv!=400){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (countInv==400){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // set new stock count
    std::cout << "\nsetStockCount(int)" << std::endl;
    Sega.setStockCount(460);
    if (Sega.countInventory()!=460){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (Sega.countInventory()==460){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // virtual func. implementation
    // sendStock to the store (replenish stock of item)
    std::cout << "\nsendStock(Item &AB)" << std::endl;

    // need: console object
    Console Switch("console",43,"1",400.00);

    // need: to restock 7 more switches
    Sega.setrequested(57);

    // sendStock
    Sega.sendStock(Switch);

    if (Switch.getItemQuantity()!=100){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (Switch.getItemQuantity()==100){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;


    std::cout << "\n-------------------------------" << std::endl;


    std::cout << "\nSUPPLY2 TESTING" << std::endl;

    // supply2: getters
    Supply2 FromSoftware("From Software","51 Rundle Mall","5000",1600);

    // getting requested stock (currently 0)
    std::cout << "getrequested()" << std::endl;
    int requested1 = FromSoftware.getrequested();
    if (requested1!=0){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (requested1==0){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // setting requested stock
    std::cout << "\nsetrequested(int)" << std::endl;
    int dummystock1 = 321;
    FromSoftware.setrequested(dummystock1);
    if (FromSoftware.getrequested()!=321){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (FromSoftware.getrequested()==321){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // getting name of supply1
    std::cout << "\ngetName()" << std::endl;
    std::string suppname1 = FromSoftware.getName();
    if (suppname1!="From Software"){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (suppname1=="From Software"){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // return stockCount of supply1
    std::cout << "\ncountInventory()" << std::endl;
    int countInv1 = FromSoftware.countInventory();
    if (countInv1!=1600){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (countInv1==1600){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // set new stock count
    std::cout << "\nsetStockCount(int)" << std::endl;
    FromSoftware.setStockCount(460);
    if (FromSoftware.countInventory()!=460){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (FromSoftware.countInventory()==460){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // virtual func. implementation
    // sendStock to the store (replenish stock of item)
    std::cout << "\nsendStock(Item &AB)" << std::endl;

    // need: game object
    Game Game1("game",200,"1",70.00);

    // need: to restock 200 more game1
    FromSoftware.setrequested(200);

    // sendStock
    FromSoftware.sendStock(Game1);

    if (Game1.getItemQuantity()!=400){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (Game1.getItemQuantity()==400){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    return 0;
}