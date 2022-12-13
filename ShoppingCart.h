//
// Created by rares on 11/18/2022.
//

#ifndef SHOPPINGCART_SHOPPINGCART_H
#define SHOPPINGCART_SHOPPINGCART_H

#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart  {
public:
    ShoppingCart();
    ShoppingCart(string customerName, string currentDate);
    string GetCustomerName();
    string GetDate();
    void AddItem(ItemToPurchase newItem);
    void RemoveItem(string Name);
    void ModifyItem(ItemToPurchase newItem);
    int GetNumItemsInCart();
    int GetCostOfCart();
    void PrintTotal();
    void PrintDescriptions();


private:
    string customerName;
    string currentDate;
    vector <ItemToPurchase> cartItems;
};

#endif //SHOPPINGCART_SHOPPINGCART_H