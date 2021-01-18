#include "Shop.h"
#include "Customer.h"

#include "Item.h"
#include "Game.h"
#include "Console.h"

#include "ShopSupervisor.h"
#include "Supplier.h"
#include "Supply1.h"
#include "Supply2.h"

#include <iostream>
#include <string>

int main() {

    Shop s1;
    Customer c1;

    // implementation of supplier and shopsupervisor
    Supply1 OOPGames;
    ShopSupervisor Karen;

    // to restock the shop
    Console EB;

    // getters and setters to confirm shop details
    s1.setName("EB Games");
    s1.setSuburb("Firle");
    s1.setPostcode(5070);

    // Begin interaction with user
    std::cout << "\nHi! Welcome to " << s1.getName() << " at " << s1.getSuburb() << ", " << s1.getPostcode() << std::endl;

    // Begin purchase
    int noOfGames = 4;
    int noOfConsoles = 4;

    std::string itemType;
    std::string itemTitle;
    int itemPrice;
    int itemLimit = 50;
    float totalPrice = 0;

    bool isGamePurchased = false;
    bool isConsolePurchased = false;

    // Checkout vars
    std::string checkout;

    //Creating Game information storage array.
    Game *gameStorage = new Game[noOfGames];
    Console *consoleStorage = new Console[noOfConsoles];

    for (int i=0; i<itemLimit; i++){ // num 50 is a placeholder.
      //std::cout << "Loop number: " << i << std::endl;
      //std::cout << gameStorage[0].getItemTitle() << ":     " << gameStorage[0].getItemPurchased() << std::endl;
      //std::cout << gameStorage[1].getItemTitle() << ":     " << gameStorage[1].getItemPurchased() << std::endl;
      //std::cout << gameStorage[2].getItemTitle() << ":     " << gameStorage[2].getItemPurchased() << std::endl;
      //std::cout << gameStorage[3].getItemTitle() << ":     " << gameStorage[3].getItemPurchased() << std::endl;

      std::cout << "\n---- Starting purchase ----" << std::endl;
      std::cout << "Would you like to purchase a [game] or a [console]?" << std::endl;
      std::cout << std::endl << "Desired item type: ";
      std::cin >> itemType;
      //std::cout << "You have selected: " << itemType << std::endl;

      // Game selection
      if (itemType == "game") {
        if (isGamePurchased == false){
          itemPrice = c1.calculatePrice(1, itemType);
          Game game1 = Game(itemType, 50, "1", itemPrice);
          Game game2 = Game(itemType, 50, "2", itemPrice);
          Game game3 = Game(itemType, 50, "3", itemPrice);
          Game game4 = Game(itemType, 50, "4", itemPrice);

          gameStorage[0] = game1;
          gameStorage[1] = game2;
          gameStorage[2] = game3;
          gameStorage[3] = game4;

          isGamePurchased = true;
        }

        std::cout << "\n---- Choosing a game----" << std::endl;
        std::cout << "Please look through the list below of games available:" << std::endl;
        std::cout << "1. game1" << std::endl;
        std::cout << "2. game2" << std::endl;
        std::cout << "3. game3" << std::endl;
        std::cout << "4. game4" << std::endl;
        std::cout << std::endl << "Enter the desired game's number: ";
        std::cin >> itemTitle;

        for (int i = 0; i < noOfGames; i++){
          if (gameStorage[i].getItemTitle() == itemTitle){
            gameStorage[i].addItem();
            //std::cout << "Adding to: " << gameStorage[i].getItemTitle();
            //std::cout << "       " << gameStorage[i].getItemPurchased() << std::endl;
          }
        }
      }


      // Console selection
       else if (itemType == "console") {
          if (isConsolePurchased == false){
           itemPrice = c1.calculatePrice(1, itemType);
           Console console1(itemType, 50, "1", itemPrice);
           Console console2(itemType, 50, "2", itemPrice);
           Console console3(itemType, 50, "3", itemPrice);
           Console console4(itemType, 50, "4", itemPrice);

           consoleStorage[0] = console1;
           consoleStorage[1] = console2;
           consoleStorage[2] = console3;
           consoleStorage[3] = console4;

           isConsolePurchased = true;
         }
         std::cout << "\n---- Choosing a console----" << std::endl;
         std::cout << "Please look through the list of consoles available:" << std::endl;
         std::cout << "1. Nintendo Switch" << std::endl;
         std::cout << "2. PS4" << std::endl;
         std::cout << "3. Xbox One" << std::endl;
         std::cout << "4. PC" << std::endl;
         std::cout << std::endl << "Enter the desired console's number: ";
         std::cin >> itemTitle;

         for (int i = 0; i < noOfConsoles; i++){
           if (consoleStorage[i].getItemTitle() == itemTitle){
             consoleStorage[i].addItem();
           }
         }
       }

      // Confirming item selection
      std::cout << "\n---- Selecting item ----" << std::endl;
      std::cout << "You have selected " << itemTitle << ". " << "Press proceed to purchase." << std::endl;

      c1.addItemtoArray(itemTitle);
      std::cout << "\nReady to checkout? (Y/N): ";
      //checkout='P';
      std::cin >> checkout;

      // breaks loop if customer wants to checkout after making selections
      if (checkout=="Y" || checkout == "y"){
        break;
      } else if (checkout=="N" || checkout == "n"){
        continue;
      }

      // if customer reaches the max. num of items that can be added. (since) i made the limit 50)
      if (i==49){
        std::cout << "\nYou've reached the maximum number of items that can be bought in a single purchase!" << std::endl;
      }

    }

    // Make purchase
    std::cout << "\n---- Making purchase ----" << std::endl;
    std::cout << "Are you a member with us? (Y/N): ";

    // check if Customer is a member
    char checkMember;
    std::cin >> checkMember;
    c1.isMember(checkMember);

    if (c1.isMember(checkMember) == true) {
      std::cout << "A 5% discount will apply to every game and a 10% discount will apply to every console purchased! :)" << std::endl;
      }
    else {
      std::cout << "Please proceed to purchase." << std::endl;
    }

    // Confirmation of purchase
    int numItemsBought = c1.getnumItemsBought(); // get num of items bought
    std::string* itemslist = c1.getItemsArray(); // get customer shopping cart

    std::cout << "\n---- Confirming purchase ----" << std::endl;
    std::cout << "Items to be purchased: " << std::endl;

    /*for (int k=0;k<numItemsBought;k++){
       std::cout << " - " << itemslist[k] << std::endl;
    }*/

    //Displaying items puchased for games and consoles seperately
    std::cout << "Games: " << std::endl;
    if (isGamePurchased == true){
      for(int i = 0; i < noOfGames; i++){
        if (gameStorage[i].getItemPurchased() > 0){
          if (c1.isMember(checkMember) == true){
            gameStorage[i].itemDiscount();
          }

          std::cout << "-  " << gameStorage[i].getItemTitle() << "     " << gameStorage[i].getItemPurchased() << "x      $" << gameStorage[i].getItemPrice() << std::endl;
          totalPrice += gameStorage[i].getItemPurchased() * gameStorage[i].getItemPrice();
        }
      }
    } else{
      std::cout << "No games purchased." << std::endl;
    }

    std::cout << std::endl << "Consoles: " << std::endl;
    if (isConsolePurchased == true){
      for (int i = 0; i < noOfConsoles; i++){
        if (consoleStorage[i].getItemPurchased() > 0){
          if (c1.isMember(checkMember) == true){
            consoleStorage[i].itemDiscount();
          }

          std::cout << "-  " << consoleStorage[i].getItemTitle() << "     " << consoleStorage[i].getItemPurchased() << "x      $" << consoleStorage[i].getItemPrice() << std::endl;
          totalPrice += consoleStorage[i].getItemPurchased() * consoleStorage[i].getItemPrice();
        }
      }
    } else{
      std::cout << "No consoles purchased." << std::endl;
    }

    // Purchase summary
    std::cout << "\n---- Purchase summary ----" << std::endl;
    std::cout << "Congratulations! The total price of your purchase is: $" << totalPrice << ". We hope you return soon!" << std::endl;



    //Subtracting purchase from StockCheck
    Karen.updateStockCheck(numItemsBought);
    int currentStock = Karen.getStockCheck();
    int result = Karen.checkStock(currentStock);

    if (result==1){
      int required = Karen.renewStock(currentStock);
      OOPGames.setrequested(required);
      OOPGames.sendStock(EB);

    }

    // implementation of supplier and shop supervisor
    Supply1 Sega("Sega","50 Rundle Mall","5000",400);
    Supply2 FromSoftware("From Software","51 Rundle Mall","5000",1600);
    //ShopSupervisor Karen("Karen",2000);


    // Subtracting purchase from the store's stock

    // keeping track of each type of item purchased
    int totalItemsPurchased = 0;
    int totalGamesPurchased = 0;
    int totalConsolesPurchased = 0;

    for (int b=0;b<noOfGames;b++){
      totalGamesPurchased += gameStorage[b].getItemPurchased();
      totalConsolesPurchased += consoleStorage[b].getItemPurchased();
      totalItemsPurchased = totalGamesPurchased + totalConsolesPurchased;

    }



    // current total stock updated (games+consoles)
    Karen.updateStockCheck(totalItemsPurchased);


    // subtracting bought items with expected
    for (int a=0;a<noOfConsoles;a++){
      gameStorage[a].setItemQuantity(400 - gameStorage[a].getItemPurchased());
      consoleStorage[a].setItemQuantity(100 - consoleStorage[a].getItemPurchased());
    }



    // at this point, the games/consoles quantities have been changed.
    // the shopsupervisor stock also has been changed appropriately.

    // now time to restock:


    // restock for games first if any:

    if (totalGamesPurchased>0){
      for (int d=0;d<noOfGames;d++){
        Karen.renewStock(gameStorage[d].getItemQuantity()); // renew stock for specific items
        FromSoftware.sendStock(gameStorage[d]);
      }
    }

    // restock for consoles second

    if (totalConsolesPurchased>0){
      for (int p=0;p<noOfConsoles;p++){
        Karen.renewStock(consoleStorage[p].getItemQuantity()); // renew stock for specific items
        Sega.sendStock(consoleStorage[p]);
      }
    }

    return 0;

}
