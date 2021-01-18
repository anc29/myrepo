#include <string>
#include <math.h>
#include <iostream>
#include "Supplier.h"
#include "Item.h"
#include "Console.h"
#include "Game.h"

Supplier::Supplier(){
    requested = 0;
    name = "UNKNOWN";
    address = "UNKNOWN";
    postcode = "UNKNOWN";
    stockCount = 0; // placeholder
}

Supplier::Supplier(std::string nameSupp, std::string addressSup, std::string postcodeSupp, int numStock){
    requested = 0;
    name = nameSupp;
    address = addressSup;
    postcode = postcodeSupp;
    stockCount = numStock;
}


//new vv
void Supplier::setrequested(int stockRequested){
    if (stockRequested>0){
        requested = stockRequested;
    } else
        requested = 0;
}

int Supplier::getrequested(){
    return requested;
}

std::string Supplier::getName(){
    return name;
}

int Supplier::countInventory(){
    return stockCount;
}

void Supplier::setStockCount(int SC){
    if (SC>0){
        stockCount = SC;
    }


}


Supplier::~Supplier(){

}