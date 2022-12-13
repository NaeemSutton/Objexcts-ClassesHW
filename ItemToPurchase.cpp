#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() {
    Name = "none";
    Price = 0;
    Quantity = 0;
    Description ="none";
}

ItemToPurchase::ItemToPurchase(string Name,string Description, int Price, int Quantity) {

    this->Name = Name;
    this->Price = Price;
    this->Quantity = Quantity;
    this->Description = Description;
}



void ItemToPurchase::SetName(string Name) {
    this->Name = Name;
}

string ItemToPurchase::GetName() {
    return Name;
}

void ItemToPurchase::SetPrice(int Price) {
    this->Price = Price;
}

int ItemToPurchase::GetPrice(){
    return Price;
}

void ItemToPurchase::SetQuantity(int Quantity) {
    this->Quantity = Quantity;
}

int ItemToPurchase::GetQuantity() {
    return Quantity;
}

void ItemToPurchase::SetDescription(string Description) {
    this->Description = Description;
}

string ItemToPurchase::GetDescription() {
    return Description;
}

void ItemToPurchase::PrintItemCost() {
    cout << Name << " " << Quantity << " @ $" << Price << " = $" << Price * Quantity << endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout << Name << " " << Description << endl;
}
