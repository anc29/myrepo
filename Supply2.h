#ifndef SUPPLY2_H
#define SUPPLY2_H

#include <string>
#include "Item.h"
#include "Console.h"
#include "Supplier.h"

class Supply2 : public Supplier{


    private:
    int maxStockGames = 1600; // maxStock of games for the shop.
    // i.e. each title has 400 copies

    public:
    Supply2();
    Supply2(std::string,std::string,std::string,int);


    void sendStock(Item&); // updates value in ItemQuantity in Item class
    int getMaxStockGame();
    ~Supply2();

};

#endif // SUPPLY2_H
