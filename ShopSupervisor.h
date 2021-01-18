#ifndef SHOPSUPERVISOR_H
#define SHOPSUPERVISOR_H

#include <string>
#include "Supplier.h"

class ShopSupervisor
{
    private:
    std::string name = "Karen";
    int stockCheck; // the stockCheck set in the constructor

    protected:
    int maxStockCheck;
    int maxGames;
    int maxConsoles;

    public:
    //constructor
    ShopSupervisor();
    ShopSupervisor(std::string, int);

    // getters
    int getStockCheck();


    // setters
    void setStockCheck(int);


    // methods
    void updateStockCheck(int);
    bool checkStock(int); // check if store if inventory is under capacity
    void renewStock(int,Supplier&); // renew stock in store if checkStock is true

    //destructor
    ~ShopSupervisor();

};

#endif // SHOPSUPERVISOR_H
