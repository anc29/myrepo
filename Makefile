ebGames: UI_main_new.cpp ShopSupervisor.o Supplier.o Supply1.o Supply2.o Customer.o Shop.o Item.o Game.o Console.o
	g++ UI_main_new.cpp ShopSupervisor.o Supplier.o Supply1.o Supply2.o Customer.o Shop.o Item.o Game.o Console.o -o ebGames

ebOld: UI_main.cpp ShopSupervisor.o Supplier.o Supply1.o Supply2.o Customer.o Shop.o Item.o Game.o Console.o
	g++ UI_main.cpp ShopSupervisor.o Supplier.o Supply1.o Supply2.o Customer.o Shop.o Item.o Game.o Console.o -o ebOld


uiTest.o: UI_main_new.cpp
	g++ -c UI_main_new.cpp



SupplierTester: SupplierTester.cpp Supplier.o ShopSupervisor.o Supply1.o Supply2.o Item.o Console.o
	g++ SupplierTester.cpp Supplier.o ShopSupervisor.o Supply1.o Supply2.o Item.o Console.o -o SupplierTester

SupplierTesterNew: newTestSupp.cpp Supplier.o Supply1.o Supply2.o Item.o Game.o Console.o
	g++ newTestSupp.cpp Supplier.o Supply1.o Supply2.o Item.o Game.o Console.o -o SupplierTesterNew

ShopSupervisorTester: Supplier.o ShopSupervisor.o ShopSupervisorTester.cpp
	g++ Supplier.o ShopSupervisor.o ShopSupervisorTester.cpp -o SupervisorTester

ShopSupervisor.o: ShopSupervisor.cpp ShopSupervisor.h
	g++ -c ShopSupervisor.cpp

Supplier.o: Supplier.cpp Supplier.h
	g++ -c Supplier.cpp

Supply1.o: Supply1.cpp Supply1.h
	g++ -c Supply1.cpp

Supply2.o: Supply2.cpp Supply2.h
	g++ -c Supply2.cpp



CustomerTester: Customer.o Shop.o
	g++ Customer.o Shop.o CustomerTester.cpp -o CustomerTester

Customer.o: Customer.cpp Customer.h
	g++ -c Customer.cpp


ShopTester: Shop.o ShopTester.cpp
	g++ Shop.o ShopTester.cpp -o ShopTester

Shop.o: Shop.cpp Shop.h
	g++ -c Shop.cpp




itemTest: itemTestMain.o Item.o Console.o Game.o
	g++ itemTestMain.o Item.o Console.o Game.o -o itemTest

itemTestMain.o: itemTestMain.cpp
	g++ -c itemTestMain.cpp

Item.o: Item.cpp Item.h
	g++ -c Item.cpp

Console.o: Console.cpp Console.h
	g++ -c Console.cpp

Game.o: Game.cpp Game.h
	g++ -c Game.cpp




one: ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp test.cpp
	 g++ -Wall -Wextra -o testing ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp test.cpp

two: ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp CustomerTester.cpp
	 g++ -Wall -Wextra -o antony ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp CustomerTester.cpp

three: ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp Game.cpp Shop.cpp UI_main.cpp
	   g++ -Wall -Wextra -o week9 ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp Game.cpp Shop.cpp UI_main.cpp

myTester: ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp Customer.cpp ShopSupervisorTester.cpp
		  g++ -Wall -Wextra -o SSSTest ShopSupervisor.cpp Supplier.cpp Console.cpp Item.cpp ShopSupervisorTester.cpp