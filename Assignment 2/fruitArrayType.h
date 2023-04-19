
#ifndef FRUITARRAYTYPE_H
#define FRUITARRAYTYPE_H

#include <iostream>
#include <cassert>
#include "arrayListType.h"
#include "fruit.h"

class fruitArrayType: public arrayListType<Fruit>
{
    public:
        void print();
        void print(int);
        void print(string);
        void updateQuan(int, double);
        void updateUP(string, double);
        double getTotalCost();
};

#endif // FRUITARRAYTYPE_H
