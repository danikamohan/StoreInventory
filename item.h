#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using namespace std;

class Item {
private:
    
    string name;
    double price = 0;
    int quantity = 0;
public:
    
    Item(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }
    Item() {
        name = "";
        price = 0.0;
        quantity = 0;
    }
    void displayFunction() {
        cout << "\n----------------------\n"
        << "Item name: " << name
        << "\nPrice: $" << price
        << "\nQuantity: " << quantity << " units"
        << "\n----------------------\n";
    }
    // getters
    string getName() const {
        return name;
    }
    double getPrice() const {
        return price;
    }
    int getQuantity() const {
        return quantity;
    }
    //setters
    void setName(string n) {
        name = n;
    }
    void setPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
};




#endif
