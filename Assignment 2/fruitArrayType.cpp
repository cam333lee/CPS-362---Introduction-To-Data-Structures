//fruitArrayType.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "fruit.h"
#include "arrayListType.h"
#include "fruitArrayType.h"
using namespace std;

void fruitArrayType::print() {

    cout << "The shopping items are: " << endl;

    cout << left << setw(20) << "Item:" << left << setw(20) << "Name:" << left << setw(20) << "Unit Price ($):" << left << setw(20) << "Quantity ($): " << left << setw(20) << "Cost ($):" << endl;

    for(int i = 0; i < length; i++) {

        cout << left << setw(20) << i + 1 << list[i];

    }

}

void fruitArrayType::print(int userNum) {

    //cout << list[userNum - 1];
    //cout << list[2];

    cout << "The " << userNum << " item in the list is: " << endl;

    cout << left << setw(20) << "Item:" << left << setw(20) << "Name:" << left << setw(20) << "Unit Price ($):" << left << setw(20) << "Quantity ($): " << left << setw(20) << "Cost ($):" << endl;

    cout << left << setw(20) << userNum << left << setw(20) << list[userNum - 1];


}

void fruitArrayType::print(string userName) {

    cout << "These are the transactions for " << userName << ": " << endl;

    for(int i = 0; i < length; i++) {

        if(list[i].getName() == userName) {

            cout << left << setw(20) << "Item:" << left << setw(20) << "Name:" << left << setw(20) << "Unit Price ($):" << left << setw(20) << "Quantity ($): " << left << setw(20) << "Cost ($):" << endl;

            cout << left << setw(20) << i + 1 << left << setw(20) << list[i] << endl;

        }

    }

}

void fruitArrayType::updateQuan(int itemNum, double upQuan) {

    list[itemNum - 1].setQuantity(upQuan);

}

void fruitArrayType::updateUP(string fruitName, double newUP) {

    for(int i = 0; i < length; i++) {

        if(list[i].getName() == fruitName) {

            list[i].setUp(newUP);

        }

    }

}

double fruitArrayType::getTotalCost() {

    double totalcost;

    for(int i = 0; i < length; i++) {

        totalcost += list[i].cost();

    }

    cout << "The total cost of this transaction is: $" << totalcost;
    cout << endl;

}

