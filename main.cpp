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
    Item whiteChocolate("White Chocolate", 4.99, 20);

    // add items created to inventory class
    chocolateStore.addItem(milkChocolate);
    chocolateStore.addItem(darkChocolate);
    chocolateStore.addItem(whiteChocolate);

    // search by name and display 1 item 
    cout << "---SEARCH ITEM---\n";
    chocolateStore.searchItem("Blue Chocolate"); // bad input test
    chocolateStore.searchItem("White Chocolate");


    // sort by price and display
    cout << "---SORTED BY PRICE---\n";
    chocolateStore.sortByPrice();
    chocolateStore.displayAll();

    // sort by name and then display
    cout << "---SORTED BY NAME---\n";
    chocolateStore.sortByName();
    chocolateStore.displayAll();

    // remove item from inventory class
    cout << "---REMOVED ITEM---\n";
    chocolateStore.removeItem("White Chocolate");
    // display all items in inventory class
    chocolateStore.displayAll();

    return 0;

}