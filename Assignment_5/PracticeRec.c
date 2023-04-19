//Printing 4 lines of 4

#include <iostream>
using namespace std;

void rec1(int a);

int main() {

    int a = 4;
    rec1(a);

    return 0;
}


//TRY TO PRINT 4 STARS IN 4 ROWS
void rec1(int num) {

    if(num > 0) {

        for(int i = 0; i < num, i++) {

            cout << "*";

        }

        cout << endl;

    return(rec1);


    }

}
