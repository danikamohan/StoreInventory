// Store Inventory Tracker
// Danika Mohan

#include <iostream>
#include "inventory.h"
#include "item.h"
#include <string>
using namespace std;

int main() {

    // create inventory class
    Inventory chocolateStore;

    // create 3 item classes
    Item milkChocolate("Milk Chocolate", 3.99, 20);
    Item darkChocolate("Dark Chocolate", 3.99, 20);
    Item whiteChocolate("White Chocolate", 3.99, 20);

    // add items created to inventory class
    chocolateStore.addItem(milkChocolate);
    chocolateStore.addItem(darkChocolate);
    chocolateStore.addItem(whiteChocolate);

    // remove item from inventory class
    chocolateStore.removeItem("Dark Chocolate");

    // display all items in inventory class
    chocolateStore.displayAll();

    return 0;

}