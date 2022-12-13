#ifndef SHOPPINGCART_ITEMSTOPURCHASE_H
#define SHOPPINGCART_ITEMSTOPURCHASE_H

#include <iostream>
#include <string>
#include <vector>



using namespace std;


class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(string Name, string Description, int Price, int Quantity);
    void SetName(string name);
    string GetName();
    void SetPrice(int Price);
    int GetPrice();
    void SetQuantity(int Quantity);
    int GetQuantity();
    void SetDescription(string Description);
    string GetDescription();
    void PrintItemCost();
    void PrintItemDescription();
private:
    string Name;
    int Price;
    int Quantity;
    string Description;
};




#endif
