#ifndef FRUIT_H
#define FRUIT_H
#include <string>
#include <iostream>
using namespace std;

class Fruit{

    private:
        string name;
        float up;
        float quantity;

    public:
        void setItem(string, float, float);
        void setName(string);
        void setUp(float);
        void setQuantity(float);
        string getName() const {return name;}
        float getUp() const {return up;}
        float getQuantity()const {return quantity;}
        float cost() const {return up * quantity;} //might have to change
        Fruit(string N = "", float up = 0.0, float quantity = 0.0);
        friend ostream & operator<<(ostream &, Fruit &);
};
#endif // FRUIT_H

