//main.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "fruit.h"
#include "arrayListType.h"
#include "fruitArrayType.h"
using namespace std;

const int SIZE = 5;
string menuNames[SIZE] = {"Apple", "Banana", "Pear", "Strawberry", "Blueberry"};
float menuUp[SIZE] = {0.99, 1.49, 1.55, 2.95, 3.03};

//prototype
void showMenu();


int main() {

    fruitArrayType shoppingList;
    int choice;
    float quantity;


    do {


        //Showing user the menu
        showMenu();
        cout << "Please enter your selection: " << endl;
        cin >> choice;

        while(choice > SIZE || choice < 0) {

            cout << "Please enter a number between 0-- 5!" << endl;
            showMenu();
            cin >> choice;

        }

        if (choice > 0) {

            cout << "Please enter the quantity of " << menuNames[choice-1] << " you would like: " << endl;
            cin >> quantity;
            cout << endl;

            Fruit newItem;
            newItem.setItem(menuNames[choice-1], menuUp[choice-1], quantity);

            shoppingList.insertEnd(newItem);
            cout << endl<< endl;
        }


    }
     while(choice != 0);

    //Function #1
    shoppingList.print();  //printing entire shoppingList array
    cout << endl << endl;

    char userAnswer;
    int userChangeNum;
    double userChangeQuan;
    cout << "Would you like to update an item's quantity? Type 'Y' or 'N': ";
    cin >> userAnswer;

    if(userAnswer == 'Y' || userAnswer == 'y') {

        //Function 4
        cout << "Which item in the list would you like to update? ";
        cin >> userChangeNum;
        cout << "What would you like to change the quantity to? (in lbs.) ";
        cin >> userChangeQuan;

        shoppingList.updateQuan(userChangeNum, userChangeQuan);
        cout << endl << endl;
        cout << "Your new list looks like: ";
        shoppingList.print();
        cout << endl << endl;
    }


    char userAnswer2;
    string userChangeFruit;
    double userChangeUP;

    cout << "Would you like to update a fruit's unit price? Type 'Y' or 'N': ";
    cin >> userAnswer2;

    if(userAnswer2 == 'Y' || userAnswer2 == 'y') {

        //Function 4
        cout << "Which fruit in the list would you like to update? ";
        cin >> userChangeFruit;
        cout << "What would you like to change the unit price to? (in $) ";
        cin >> userChangeUP;

        shoppingList.updateUP(userChangeFruit, userChangeUP);
        cout << endl << endl;
        cout << "Your new list looks like: ";
        shoppingList.print();
        cout << endl << endl;
    }

    int userNum;
    //Function #2
    cout << "What item number would you like to print out? ";
    cin >> userNum;
    shoppingList.print(userNum);

    //Function #3
    //Ask user what kind of fruit do you want user enter fruit name
    string fruitName;
    cout << "What kind of fruit would you like to display? ";
    cin >> fruitName;
    shoppingList.print(fruitName);

    //Function 5 (Get Total Cost)

    shoppingList.getTotalCost();


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
1
Please enter the quantity of Apple you would like:
2



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
3
Please enter the quantity of Pear you would like:
4



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
5
Please enter the quantity of Blueberry you would like:
2



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
3
Please enter the quantity of Pear you would like:
5



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
2
Please enter the quantity of Banana you would like:
1



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
6
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
0
The shopping items are:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
1                   Apple               0.99                2.00                1.98
2                   Pear                1.55                4.00                6.20
3                   Blueberry           3.03                2.00                6.06
4                   Pear                1.55                5.00                7.75
5                   Banana              1.49                1.00                1.49


Would you like to update an item's quantity? Type 'Y' or 'N': y
Which item in the list would you like to update? 2
What would you like to change the quantity to? (in lbs.) 7


Your new list looks like: The shopping items are:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
1                   Apple               0.99                2.00                1.98
2                   Pear                1.55                7.00                10.85
3                   Blueberry           3.03                2.00                6.06
4                   Pear                1.55                5.00                7.75
5                   Banana              1.49                1.00                1.49


Would you like to update a fruit's unit price? Type 'Y' or 'N': y
Which fruit in the list would you like to update? Pear
What would you like to change the unit price to? (in $) 3.03


Your new list looks like: The shopping items are:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
1                   Apple               0.99                2.00                1.98
2                   Pear                3.03                7.00                21.21
3                   Blueberry           3.03                2.00                6.06
4                   Pear                3.03                5.00                15.15
5                   Banana              1.49                1.00                1.49


What item number would you like to print out? 2
The 2 item in the list is:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
2                   Pear                3.03                7.00                21.21
What kind of fruit would you like to display? Pear
These are the transactions for Pear:
Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
2                   Pear                3.03                7.00                21.21

Item:               Name:               Unit Price ($):     Quantity ($):       Cost ($):
4                   Pear                3.03                5.00                15.15

The total cost of this transaction is: $45.89

Process returned 0 (0x0)   execution time : 64.301 s
Press any key to continue.
*/



