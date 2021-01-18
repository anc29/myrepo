#include "Supplier.h"
#include "ShopSupervisor.h"
#include <string>
#include <iostream>
#include "Supply2.h"
#include "Supply1.h"
#include "Item.h"

int main(){


    // testing all Supplier functions
    Supply2 FromSoftware("FromSoftware","56 Clifford St","5031",1600);


    // testing for getter (getting requested stock)
    std::cout<< "getrequested()" << std::endl;
    int requested = FromSoftware.getrequested();
    if (requested!=0){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (requested==0){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // testing for setter (set requested stock)
    std::cout << "\nsetrequested(int)" << std::endl;
    int newStockCount = 10;
    FromSoftware.setrequested(newStockCount);
    if (FromSoftware.getrequested()!=10){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (FromSoftware.getrequested()==10){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // testing for sendStock(Item&)
    std::cout << "\nsendStock(Item&)" << std::endl;
    // need object of Console class to test method
    Console *EB;
    EB = new Console();

    //send stock depends on the requested attribute
    EB->setItemQuantity(30);
    FromSoftware.sendStock(*EB);
    int ebgameqnt = EB->getItemQuantity();

    int comparisonConsole = (FromSoftware.countInventory() / 4);


    if (ebgameqnt!=comparisonConsole){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (ebgameqnt==comparisonConsole){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // set amount of stock for supplier
    std::cout << "\nsetStockCount(int)" << std::endl;
    int stockcountnew = 1500;
    FromSoftware.setStockCount(stockcountnew);
    if (FromSoftware.countInventory()!=1500){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (FromSoftware.countInventory()==1500){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;


    // testing for countInventory() (get stockCount)
    std::cout << "\ncountInventory()" << std::endl;
    int countInventory = FromSoftware.countInventory();
    if (countInventory!=1500){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (countInventory==1500){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;




    return 0;
}