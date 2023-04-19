#include <iostream>
#include "Fruit.h"
#include<iomanip>
#include<math.h>

using namespace std;

const int SIZE = 5;
string menuNames[SIZE] = {"Apple", "Banana", "Pear", "Strawberry", "Blueberry"};
float menuUp[SIZE] = {0.99, 1.49, 1.55, 2.95, 3.03};

//prototype
void showMenu();
float totalCost(Fruit arr[], int);
void showList(Fruit arr[], int);

int main() {

    //fruit userArr[] = , int;
    const int userSIZE = 100;
    Fruit userArr[userSIZE];
    float quantity;
    int choice;
    int count = 0;



    do {

        //Showing user the menu
        showMenu();
        cout << "Please enter your selection: " << endl;
        cin >> choice;

        while(choice > 5 || choice < 0) {

            cout << "Please enter a number between 0-- 5!" << endl;
            showMenu();
            cin >> choice;

        }

        if (choice != 0) {

            userArr[count].setName(menuNames[choice-1]);
            userArr[count].setUp(menuUp[choice-1]);
            //cout << userArr[count];
            //cout << menuUp[choice-1];
            cout << "Please enter the quantity of " << menuNames[choice-1] << " you would like: " << endl;
            cin >> quantity;
            cout << endl;
            userArr[count].setQuantity(quantity); //round((quantity*100.0)/100.0)
            count++;
            cout << endl<< endl;
        }


    }
     while(choice != 0);



     if (choice == 0) {

        showList(userArr, count);

        cout << "******************************************************" << endl;

        cout << "Your total cost is: $";
        printf("%.2f", totalCost(userArr, count));
        cout << "\n";

     }

    return 0;
}

void showMenu() {

 int i = 0;
    cout << "Welcome to the Fresh Fruit Store!"<< endl;
    cout << "********************************************" << endl;
    cout <<"Please enter your selection (0--5)!"<< endl;

    cout << "#" << setw(2) << left << i << setw(20) << left << "Exit" << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << "#" << setw(2) << left << i + 1 << setw(20) << left << menuNames[i] << right << "$" << menuUp[i] << "/lb" << endl;

    }

}

float totalCost(Fruit arr[], int size) {

    float cost = 0;

    for(int i = 0; i < size; i++) {

        cost += arr[i].cost();

    }

    //cost = round(cost * 100.0) / 100; //fix this two decimal points

    return cost;

}

void showList(Fruit arr[], int size) {

    cout << "The shopping items are: " << endl;

    cout << left << setw(20) << "Item:" << left << setw(20) << "Name:" << left << setw(20) << "Unit Price ($):" << left << setw(20) << "Quantity ($): " << left << setw(20) << "Cost ($):" << endl;

    for(int i = 0; i < size; i++) {

        cout << left << setw(20) << i + 1 << arr[i];

    }

}

/*OUTPUT

Welcome to the Fresh Fruit Store!
********************************************
Please enter your selection (0--5)!
#0 Exit
#1 Apple               $0.99/lb
#2 Banana              $1.49/lb
#3 Pear                $1.55/lb
#4 Strawberry          $2.95/lb
#5 Blueberry           $3.03/lb
Please enter your selection:
9
Please enter a number between 0-- 5!
Welcome to the Fresh Fruit Store!
********************************************
Please enter your selection (0--5)!
#0 Exit
#1 Apple               $0.99/lb
#2 Banana              $1.49/lb
#3 Pear                $1.55/lb
#4 Strawberry          $2.95/lb
#5 Blueberry           $3.03/lb
1
Please enter the quantity of Apple you would like:
2.5654



Welcome to the Fresh Fruit Store!
********************************************
Please enter your selection (0--5)!
#0 Exit
#1 Apple               $0.99/lb
#2 Banana              $1.49/lb
#3 Pear                $1.55/lb
#4 Strawberry          $2.95/lb
#5 Blueberry           $3.03/lb
Please enter your selection:
4
Please enter the quantity of Strawberry you would like:
5.36



Welcome to the Fresh Fruit Store!
********************************************
Please enter your selection (0--5)!
#0 Exit
#1 Apple               $0.99/lb
#2 Banana              $1.49/lb
#3 Pear                $1.55/lb
#4 Strawberry          $2.95/lb
#5 Blueberry           $3.03/lb
Please enter your selection:
1
Please enter the quantity of Apple you would like:
3.6



Welcome to the Fresh Fruit Store!
********************************************
Please enter your selection (0--5)!
#0 Exit
#1 Apple               $0.99/lb
#2 Banana              $1.49/lb
#3 Pear                $1.55/lb
#4 Strawberry          $2.95/lb
#5 Blueberry           $3.03/lb
Please enter your selection:
0
The shopping items are:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
1                   Apple               0.99                2.57                2.54
2                   Strawberry          2.95                5.36                15.81
3                   Apple               0.99                3.60                3.56
******************************************************
Your total cost is: $21.92

Process returned 0 (0x0)   execution time : 19.049 s
Press any key to continue.

*/









