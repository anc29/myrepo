#include "Supply2.h"
#include "Supplier.h"
#include <math.h>
#include "Item.h"


Supply2::Supply2() : Supplier(){


}

Supply2::Supply2(std::string nameSupp, std::string addressSup, std::string postcodeSupp, int numStock) : Supplier(nameSupp, addressSup, postcodeSupp, numStock){


}

void Supply2::sendStock(Item &AB){

    int requested = this->getrequested();

    if (requested>0){
        int item = AB.getItemQuantity(); // gets the num of items in the store
        int individual = maxStockGames / 4;
        if (item<individual){
            int remainding = individual - item;
            int newstock = requested - remainding;
            AB.setItemQuantity(item + remainding); // adds the stock to the store's stock
            this->setrequested(newstock);
        }
    }

}




int Supply2::getMaxStockGame(){

    return maxStockGames;
}

Supply2::~Supply2(){

}