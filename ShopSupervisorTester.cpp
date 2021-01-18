#include "Supplier.h"
#include "ShopSupervisor.h"
#include <string>
#include <iostream>
#include "Supply2.h"
#include "Supply1.h"
#include "Item.h"
#include "Game.h"
#include "Console.h"

int main(){

    // testing all SHOPSUPERVISOR functions
    ShopSupervisor Karen("Karen Smith",2000);
    Supply2 FromSoftware("From Software","56 Clifford St","5031",400);

    std::cout << "METHOD/BEHAVIOUR TESTING" << std::endl;

    // testing getter for stockcheck
    std::cout << "\ngetStockCheck()" << std::endl;
    int stockcheck = Karen.getStockCheck();
    if (stockcheck!=2000){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (stockcheck==2000){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // testing setter for stockcheck
    std::cout << "\nsetStockCheck(int)" << std::endl;
    Karen.setStockCheck(150);
    int result = Karen.getStockCheck();
    if (result!=150){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (result==150){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // reset stockcheck
    std::cout << "\nsetStockCheck(int) again" << std::endl;
    Karen.setStockCheck(100);
    int reset = Karen.getStockCheck();
    if (reset!=100){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (reset==100){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;


    // testing updating stockCheck
    std::cout << "\nupdateStockCheck()" << std::endl;
    int updateTest = 30;
    Karen.updateStockCheck(updateTest);
    int updateResult = Karen.getStockCheck();
    if (updateResult!=70){
        std::cout << "TEST FAILED!" << std::endl;
    } else if (updateResult==70){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // testing checking stock
    std::cout << "\ncheckStock(int)" << std::endl;
    int testInventory = 80;
    int checkStock = Karen.checkStock(testInventory);
    if (checkStock!=1){
        std::cout << "TEST FAILED!" << std::endl;
        std::cout << checkStock << std::endl;
    } else if (checkStock==1){
        std::cout << "TEST PASSED!" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    // resetting the stockcheck to 100
    Karen.setStockCheck(100);

    // testing renew stock
    std::cout << "\nrenewstock(int,Supplier&)" << std::endl;

    // using a Game Object
    Game Game1("Game",80,"Sonic Mania",70.00);

    int renew;
    if (checkStock!=1){
        std::cout << "TEST FAILED!" << std::endl;
        std::cout << checkStock << std::endl;
    } else if (checkStock==1){
        std::cout << "TEST PASSED!" << std::endl;

        int currentQuantity = Game1.getItemQuantity();
        Karen.renewStock(currentQuantity,FromSoftware);
        renew = FromSoftware.getrequested();
        if (renew==320){
            std::cout << "renewStock: " << "TEST PASSED!" << std::endl;
        } else if (renew!=320){
            std::cout << "renewStock: " << "TEST FAILED!" << std::endl;
            std::cout << "what is renewStock? " << renew << std::endl;
        } else
            std::cout << "renewStock: " << "DEBUGGING required" << std::endl;

    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;





    // boundary testing
    std::cout << "\n\nBOUNDARY TESTING" << std::endl;
    std::cout << "\ncheckStock()" << std::endl;

    // maxStockCheck = 2000; // inventory = 2000;
    int inventory = 2000;
    int checkstockfunct = Karen.checkStock(inventory);

    std::cout << "\nINVENTORY = 2000" << std::endl;

    if (checkstockfunct!=0){
        std::cout << "EXPECTED OUTPUT NOT ACHIEVED" << std::endl;
    } else if (checkstockfunct==0){
        std::cout << "EXPECTED OUTPUT ACHIEVED" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;

    int inventory1 = -1;
    int checkstockfunct1 = Karen.checkStock(inventory1);

    std::cout << "\nINVENTORY = -1" << std::endl;

    if (checkstockfunct1!=0){
        std::cout << "EXPECTED OUTPUT NOT ACHIEVED" << std::endl;
    } else if (checkstockfunct1==0){
        std::cout << "EXPECTED OUTPUT ACHIEVED" << std::endl;
    } else
        std::cout << "DEBUGGING REQUIRED" << std::endl;




}