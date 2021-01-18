#include "Supply1.h"
#include <math.h>
#include "Supplier.h"
#include "Item.h"

Supply1::Supply1() : Supplier(){


}

Supply1::Supply1(std::string nameSupp, std::string addressSup, std::string postcodeSupp, int numStock) : Supplier(nameSupp, addressSup, postcodeSupp, numStock){


}

void Supply1::sendStock(Item &AB){

    int requested = this->getrequested();

    if (requested>0){
        int item = AB.getItemQuantity(); // gets the num of items in the store
        int individual = maxStockConsole / 4;
        if (item<individual){
            int remainding = individual - item;
            int newstock = requested - remainding;
            AB.setItemQuantity(item + remainding); // adds the stock to the store's stock
            this->setrequested(newstock);
        }
    }

}

int Supply1::getMaxStockConsole(){

    return maxStockConsole;
}

Supply1::~Supply1(){

}
