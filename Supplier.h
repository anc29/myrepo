#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>
#include "Item.h"
#include "Console.h"

class Supplier
{
    private:
    std::string name;
    std::string address;
    std::string postcode;
    int requested;

    protected:
    int stockCount;

    public:
    // constructors
    Supplier();
    Supplier(std::string,std::string,std::string,int);

    //getters
    int getrequested();
    std::string getName();
    int countInventory(); // returns stockCount;


    //setters
    void setrequested(int); // sets the num of requested stock from shop
    void setStockCount(int); // set the amount of stock in supplier


    // pure virtual funct.
    virtual void sendStock(Item&) = 0;


    ~Supplier();

};

#endif // SUPPLIER_H
