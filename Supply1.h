#ifndef SUPPLY1_H
#define SUPPLY1_H

#include <string>
#include "Item.h"
#include "Console.h"
#include "Supplier.h"

class Supply1 : public Supplier{


    private:
    int maxStockConsole = 400; // maxStock of consoles for the shop.
    // i.e. each title has 100 copies

    public:
    Supply1();
    Supply1(std::string,std::string,std::string,int);


    void sendStock(Item&); // updates value in ItemQuantity in Item class
    int getMaxStockConsole();

    ~Supply1();

};

#endif // SUPPLY1_H
