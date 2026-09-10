#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
#include <string>
#include <iostream>
using namespace std;

class Inventory {
private:
    Item items [200];
    int count = 0;
    
public:
    void addItem(Item newItem) {
        if (count < 200) {
            items[count] = newItem;
            count++;
        }
    }
    void displayAll() {
        for (int i = 0; i < count; i++) {
            items[i].displayFunction();
    
        }
    }

    // remove an item
    void removeItem(string itemName) {
        for (int i = 0; i < count; i++) {
            string n = items[i].getName();
            if (n == itemName) {
                // use counting loop to copy and shift everything 
                for (int j = i; j < count - 1; j++) {
                items[j] = items[j + 1];
                }
                count--;
                cout << itemName << " was removed.\n";
                return;
            }
        }
        cout << itemName << " was not found.\n";
    }
    
};




#endif