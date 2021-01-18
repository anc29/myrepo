#include "Shop.h"
#include "Customer.h"
#include "Item.h"
#include "Game.h"
#include "Console.h"

#include <iostream>
#include <string>

int main() {

    Shop s1;
    Customer c1;
    float finalPrice = 0.00;
    float discountedPrice;

    int numTotalGames = 0;
    int numTotalConsoles = 0;
    int itemsPurchased = 0;
    int itemLimit = 5;

    char checkMember;

    bool isLooping = true;

    bool game1Exists = false;
    bool game2Exists = false;
    bool game3Exists = false;
    bool game4Exists = false;

    bool console1Exists = false;
    bool console2Exists = false;
    bool console3Exists = false;
    bool console4Exists = false;

    // getters and setters to confirm shop details
    s1.setName("EB Games");
    s1.setSuburb("Firle");
    s1.setPostcode(5070);

    //Allocating memory for dynamic arrays
    Game *gameStorage = new Game[itemLimit];
    Console *consoleStorage = new Console[itemLimit];

    // Begin interaction with user
    std::cout << "\nHi! Welcome to " << s1.getName() << " at " << s1.getSuburb() << ", " << s1.getPostcode() << std::endl;

    // Begin purchase
    while (isLooping == true && itemsPurchased < itemLimit){
        std::string itemType;
        int itemTitle;

        std::cout << "\n---- Starting purchase ----" << std::endl;
        std::cout << "Would you like to purchase a game or a console?" << std::endl;
        std::cin >> itemType;
        std::cout << "You have selected: " << itemType << std::endl;


        // Game selection
        if (itemType == "game") {
            std::cout << "\n---- Choosing a game----" << std::endl;
            std::cout << "Please look through the list below of games available and select which one to purchase by selecting the game title" << std::endl;
            std::cout << "1. game1" << std::endl;
            std::cout << "2. game2" << std::endl;
            std::cout << "3. game3" << std::endl;
            std::cout << "4. game4" << std::endl;
            std::cin >> itemTitle;
        }

        // Console selection
        else if (itemType == "console") {
            std::cout << "\n---- Choosing a console----" << std::endl;
            std::cout << "Please look through the list of consoles available and select which one to purchase by selecting the console name." << std::endl;
            std::cout << "1. Nintendo Switch" << std::endl;
            std::cout << "2. PS4" << std::endl;
            std::cout << "3. Xbox One" << std::endl;
            std::cout << "4. PC" << std::endl;
            std::cin >> itemTitle;
        }



        // Confirming item selection
        std::cout << "\n---- Selecting item ----" << std::endl;
        std::cout << "You have selected " << itemTitle << ". " << "Press proceed to purchase." << std::endl;

        //Save the price of the current item to a variable
        float itemPrice = c1.calculatePrice(1, itemType);

        //Creating the required item object and assiging a discount if required.
        if (itemType == "game"){
            int currentRequiredPosition;

            switch (itemTitle){
                case 1:
                if (game1Exists == false){
                    Game game1 = Game(itemType, 1, "game1", itemPrice);
                    gameStorage[numTotalGames] = game1;

                    game1Exists = true;
                    numTotalGames += 1;
                } else if (game1Exists = true){

                    for (int i = 0; i < numTotalGames; i++){
                        if (gameStorage[i].getItemTitle() == "game1"){
                            gameStorage[i].addItem();
                        }

                        currentRequiredPosition = i;
                    }
                }
                break;

                case 2:
                if (game2Exists == false){
                    Game game2 = Game(itemType, 1, "game2", itemPrice);
                    gameStorage[numTotalGames] = game2;

                    game2Exists = true;
                    numTotalGames += 1;
                } else if (game2Exists == true){

                    for (int i = 0; i < numTotalGames; i++){
                        if (gameStorage[i].getItemTitle() == "game2"){
                            gameStorage[i].addItem();
                        }

                        currentRequiredPosition = i;
                    }
                }
                break;

                case 3:
                if (game3Exists == false){
                    Game game3 = Game(itemType, 1, "game3", itemPrice);
                    gameStorage[numTotalGames] = game3;

                    game3Exists = true;
                    numTotalGames += 1;
                } else if (game3Exists == true){

                    for (int i = 0; i < numTotalGames; i++){
                        if (gameStorage[i].getItemTitle() == "game3"){
                            gameStorage[i].addItem();
                        }

                        currentRequiredPosition = i;
                    }
                }
                break;

                case 4:
                if (game4Exists == false){
                    Game game4 = Game(itemType, 1, "game4", itemPrice);
                    gameStorage[numTotalGames] = game4;

                    game4Exists = true;
                    numTotalGames += 1;
                } else if (game4Exists == true){

                    for (int i = 0; i < numTotalGames; i++){
                        if (gameStorage[i].getItemTitle() == "game4"){
                            gameStorage[i].addItem();
                        }

                        currentRequiredPosition = i;
                    }
                }
                break;

                default:
                std::cout << "Item does not exist." << std::endl;
                break;

            }

            /*if (checkMember == 'Y' || checkMember == 'y'){
                itemPrice = gameStorage[numTotalGames].itemDiscount();
            }*/

            //itemPrice = c1.calculatePrice(1, "game");
            //discountedPrice = gameStorage[currentRequiredPosition].calculatePrice();
        } else if(itemType == "console"){
            Console console1 = Console(itemType, 5, "console1", itemPrice);

            //discountedPrice = console1.itemDiscount();
        }
        //finalPrice += itemPrice;

        std::cout << "Would you like to purchase another item?" << std::endl;

        char checkRepeat;
        std::cin >> checkRepeat;

        if (checkRepeat == 'N' || checkRepeat == 'n') {
            isLooping = false;
        }

        itemsPurchased += 1;
    }

    // Make purchase
    std::cout << "\n---- Making purchase ----" << std::endl;
    std::cout << "Are you a member with us? Press Y to indicate ‘YES’ or N to indicate ‘NO’" << std::endl;
    std::cin >> checkMember;
    c1.isMember(checkMember);


    if (c1.isMember(checkMember) == true) {
      std::cout << "Congrats! A 5% discount will apply to every game and a 10% discount will apply to every console purchased! :)" << std::endl;

    //itemPrice = discountedPrice;
    }
    else {
      std::cout << "Please proceed to purchase." << std::endl;
    }

    // Confirmation of purchase
    //std::cout << "\n---- Confirming purchase ----" << std::endl;
    //std::cout << "Can you please confirm that you wish to purchase " << itemTitle << " for $" << finalPrice << ". Select Y to confirm or N to change." << std::endl;

    // Purchase summary
    std::cout << "\n---- Purchase summary ----" << std::endl;
    std::cout << "Congratulations! You have purchased: " << std::endl; //<< itemTitle << ". We hope you return soon!" << std::end;

    for (int i = 0; i < numTotalGames; i++){
        if (c1.isMember(checkMember) == true){
            gameStorage[i].itemDiscount();
        }

        finalPrice += gameStorage[i].getItemPrice() * gameStorage[i].getItemPurchased();
        std::cout << gameStorage[i].getItemTitle() << "   " << gameStorage[i].getItemPurchased() << "x   $" << gameStorage[i].getItemPrice() << std::endl;
    }

    delete [] gameStorage;
    delete [] consoleStorage;

    std::cout << std::endl << "Total price:  $" << finalPrice << std::endl;

    std::cout << std::endl << "We hope you return soon!" << std::endl;

    return 0;

}
