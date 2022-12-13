//
// Created by rares on 11/18/2022.
//

#include <iostream>
#include <string>
#include <vector>
#include "ShoppingCart.h"
using namespace std;


ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string customerName, string currentDate) {
    this->customerName = customerName;
    this->currentDate = currentDate;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase newItem) {
    cartItems.push_back(newItem);
}

void ShoppingCart::RemoveItem(string Name) {

    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == Name) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }
    cout << "Item not found in cart. Nothing removed." << endl;

}


void ShoppingCart::ModifyItem(ItemToPurchase newItem) {

    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == newItem.GetName()) {
            if(newItem.GetPrice() != 0) {
                cartItems.at(i).SetPrice(newItem.GetPrice()) ;
            } if(newItem.GetQuantity() != 0) {
                cartItems.at(i).SetQuantity(newItem.GetQuantity());
            } if(newItem.GetDescription() != "none") {
                cartItems.at(i).SetDescription(newItem.GetDescription());
            } else {
                cout << "Item not found in cart. Nothing modified." << endl;
            }
            return;
        }
    }
}

int ShoppingCart::GetNumItemsInCart() {

    int totalItems = 0;
    for (int i = 0; i < cartItems.size(); i++) {
        totalItems += cartItems[i].GetQuantity();
    }
    return totalItems;

}

int ShoppingCart::GetCostOfCart() {

    int totalCost = 0;

    for (int i = 0; i < cartItems.size(); ++i) {
        totalCost += cartItems[i].GetPrice();
    }
    return totalCost;
}

void ShoppingCart::PrintTotal() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl;
    cout << endl;

    if (cartItems.size() == 0) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemCost();
        }
    }
}

void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl;
    cout << "Item Descriptions" << endl;
    for (int i = 0; i < cartItems.size(); i++) {
        cartItems[i].PrintItemDescription();
    }


}