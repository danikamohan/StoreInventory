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
    // only adds new item if there is less than 200 items in inventory count
    void addItem(Item newItem) {
        if (count < 200) {
            items[count] = newItem;
            count++;
        }
    }
    // calls displayFunction from item.h
    void displayAll() {
        for (int i = 0; i < count; i++) {
            items[i].displayFunction();
        }
    }
    // search item by name and print details
    void searchItem(string itemName) {
        for (int i = 0; i < count; i++) {
            string n = items[i].getName();
            if (n == itemName) {
                items[i].displayFunction();
                return;
            }
        }
        cout << itemName << " was not found.\n";
    }
    // sorting item names in alphabetical order
    void sortByName() {
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 0; i < count - 1; i++) {
                string n = items[i].getName();
                if (n > items[i+1].getName()) {
                    Item temp;
                    temp = items[i];
                    items[i] = items[i+1];
                    items[i+1] = temp;
                    swapped = true;
                }
            }
        }
    }
    // sorting items by price (cheapest to highest price)
    void sortByPrice() {
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 0; i < count - 1; i++) {
                double p = items[i].getPrice();
                if (p > items[i+1].getPrice()) {
                    Item temp;
                    temp = items[i];
                    items[i] = items[i+1];
                    items[i+1] = temp;
                    swapped = true;
                }
            }
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
        // let user know if item not found
        cout << itemName << " was not found.\n";
    }
   
};
#endif