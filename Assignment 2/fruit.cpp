//fruit.cpp
#include <iostream>
#include "Fruit.h"
#include <iomanip>
using namespace std;

Fruit::Fruit(string N, float uP, float q) {
    name = N;
    up = uP;
    quantity = q;
}

void Fruit::setItem(string n, float UP, float Quan) {

    name = n;
    up = UP;
    quantity = Quan;
}

void Fruit::setName(string n) {

    name = n;

}

void Fruit::setUp(float uP) {

    up = uP;

}

void Fruit::setQuantity(float q) {

    quantity = q;

}

ostream & operator<<(ostream & os, Fruit & ob) {

//First Attempt
/*
    os << "Name: " << setw(20) << left << "Unit Price: " << setw(20) << left << "Quantity: " << setw(20) << left << "Cost: " << setw(20) << left<< endl;
    os << ob.name << setw(20) << left << ob.up << "/lb " << setw(20) << left << ob.quantity << "lb " << setw(20) << left << "$"  << setprecision(2) << ob.cost() << endl;
*/

    //os << left << setw(20) << "Name:" << left << setw(20) << "Unit Price:" << left << setw(20) << "Quantity" << left << setw(20) << "Cost:" << endl;

    os << left << setw(20) << ob.name << left << setw(20) << ob.up << left << setw(20) << fixed << setprecision(2) << ob.quantity << left << setw(20) << fixed << setprecision(2) << ob.cost() << endl;

    //return os;
}












