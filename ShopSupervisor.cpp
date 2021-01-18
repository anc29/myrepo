#include <string>
#include <math.h>
#include "ShopSupervisor.h"
#include "Supplier.h"
#include "Item.h"
#include <iostream>

ShopSupervisor::ShopSupervisor(){
    name = "UNKNOWN";
    stockCheck = 0;
    maxStockCheck = 0;
    maxGames = 0;
    maxConsoles = 0;

}

ShopSupervisor::ShopSupervisor(std::string givenName, int givenStockCheck){
    name = givenName;
    stockCheck = givenStockCheck;
    maxStockCheck = givenStockCheck;
    maxGames = 1600;
    maxConsoles = 400;

}

bool ShopSupervisor::checkStock(int inventory){
    if (inventory<maxStockCheck){
        return 1; // true: we need to restock!
    } else if (inventory<0){
        std::cout << "ERROR CHECKING STOCK!" << std::endl;
        return 0;
    } else

    return 0; // false: don't need to restock
}

void ShopSupervisor::renewStock(int currentQuantity,Supplier &C){

    // check type of object in the parameter

    if (C.getName()=="From Software"){
        if (currentQuantity>0){
            int requestGame = (maxGames/4) - currentQuantity;
            if (requestGame>=0){
                C.setrequested(requestGame);
            }
        }

    } else if (C.getName()=="Sega"){
        if (currentQuantity>0){
            int requestConsole = (maxConsoles/4) - currentQuantity;
            if (requestConsole>=0){
                C.setrequested(requestConsole);

            }

        }
    } else {

        std::cout << "ERROR SETTING REQUESTED STOCK TO SUPPLIER" << std::endl;
        C.setrequested(0);

    }


}

int ShopSupervisor::getStockCheck(){

    return stockCheck;
}

void ShopSupervisor::setStockCheck(int I){
    if (I>0){
        stockCheck = I;
    } else
        std::cout << "ERROR SETTING STOCK CHECK" << std::endl;

}

void ShopSupervisor::updateStockCheck(int P){
    if (P<stockCheck){
        stockCheck = stockCheck - P;
    } else
        std::cout << "ERROR UPDATING STOCK CHECK" << std::endl;

}

ShopSupervisor::~ShopSupervisor(){

}