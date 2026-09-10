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
};



#endif