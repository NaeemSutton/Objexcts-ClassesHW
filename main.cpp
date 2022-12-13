#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

char userchr = 'j';

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    if (userchr == 'a') {
        string itemName;
        string itemDescription;
        int itemPrice = 0;
        int itemQuantity = 0;
        ItemToPurchase newItem;
        cout << "ADD ITEM TO CART" << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, itemName);
        newItem.SetName(itemName);
        cout << "Enter the item description:" << endl;
        getline(cin, itemDescription);
        newItem.SetDescription(itemDescription);
        cout << "Enter the item price:" << endl;
        cin >> itemPrice;
        newItem.SetPrice(itemPrice);
        cout << "Enter the item quantity:" << endl;
        cin >> itemQuantity;
        newItem.SetQuantity(itemQuantity);
        theCart.AddItem(newItem);
    } else if (userchr == 'd') {
        string itemName;
        cout << "REMOVE ITEM FROM CART" << endl;
        cout << "Enter name of item to remove:" << endl;
        getline(cin, itemName);
        theCart.RemoveItem(itemName);
    } else if (userchr == 'c') {
        string itemName;
        int itemQuantity = 0;
        ItemToPurchase newItem;
        cout << "CHANGE ITEM QUANTITY" << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, itemName);
        newItem.SetName(itemName);
        cout << "Enter the new quantity:" << endl;
        cin >> itemQuantity;
        newItem.SetQuantity(itemQuantity);
        theCart.ModifyItem(newItem);
    } else if (userchr == 'i') {
        cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
        theCart.PrintDescriptions();
    } else if (userchr == 'o') {
        cout << "OUTPUT SHOPPING CART" << endl;
        theCart.PrintTotal();
    } else if (userchr == 'q') {
        cout << "Goodbye!" << endl;
    } else {
        cout << "Invalid option" << endl;
    }
}

int main() {
    string customerName;
    string currentDate;
    cout << "Enter customer's name:" << endl;
    getline(cin, customerName);
    cout << "Enter today's date:" << endl;
    getline(cin, currentDate);
    cout << endl;
    ShoppingCart theCart(customerName, currentDate);
    while (userchr != 'q') {
        PrintMenu();
        cin >> userchr;
        cin.ignore();
        ExecuteMenu(userchr, theCart);
    }



    return 0;
}
