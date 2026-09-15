# Store Inventory
 
A simple inventory management system written in C++. Personal project to practice object-oriented programming.
 
## Features
 
- Add items to the inventory
- Remove items by name
- Display the full inventory
- Search for an item by name
- Sort by name (alphabetical)
- Sort by price (low to high)
Sorting uses a bubble sort I built from scratch.
 
## Files
 
- `item.h` - Item class (name, price, quantity)
- `inventory.h` - Inventory class (holds a list of Items, handles add/remove/sort/search)
- `main.cpp` - example usage
## Example usage
 
```cpp
Inventory chocolateStore;
 
Item milkChocolate("Milk Chocolate", 3.99, 20);
Item darkChocolate("Dark Chocolate", 3.99, 20);
Item whiteChocolate("White Chocolate", 4.99, 20);
 
chocolateStore.addItem(milkChocolate);
chocolateStore.addItem(darkChocolate);
chocolateStore.addItem(whiteChocolate);
 
chocolateStore.searchItem("White Chocolate");
chocolateStore.sortByPrice();
chocolateStore.displayAll();
chocolateStore.removeItem("White Chocolate");
```
 
## How to run
 
```
g++ -std=c++17 -Wall -o inventory main.cpp
./inventory
```
 
## What's next
 
- Save/load inventory to a file
- Update an item's price or quantity without removing and re-adding it
- Input validation (no negative prices or quantities)
- Interactive menu in main.cpp
