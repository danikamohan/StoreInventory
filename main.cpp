// Store Inventory Tracker
#include <iostream>
#include "inventory.h"
#include "item.h"
#include <string>
using namespace std;

int main() {

    Inventory chocolateStore;
    Item milkChocolate("Milk Chocolate", 3.99, 20);
    Item darkChocolate("Dark Chocolate", 3.99, 20);
    Item whiteChocolate("White Chocolate", 3.99, 20);

    chocolateStore.addItem(milkChocolate);
    chocolateStore.addItem(darkChocolate);
    chocolateStore.addItem(whiteChocolate);

    chocolateStore.displayAll();


    
    return 0;

}