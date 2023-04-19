//Assignment 4
//Cameron Lee
//4/26/22
#include <iostream>
#include "linkedQueueType.h"
#include <queue>
using namespace std;

int main() {

    char ch;
    linkedQueueType myQueue;

    cout << "Please enter a sentence: ";
    while(cin.get(ch) && ch != '\n') {

        if(islower(ch)) {

            ch = toupper(ch);

        }

        myQueue.addQueue(ch);

    }

    linkedQueueType tempQueue;

    tempQueue = myQueue;

    while(!tempQueue.isEmptyQueue()) {

        cout << tempQueue.front() << "";
        tempQueue.deleteQueue();

    }

    cout << endl;

    return 0;
}

/*OUTPUT

Please enter a sentence: Here we goooo!!! Let's do this thing.
HERE WE GOOOO!!! LET'S DO THIS THING.

Process returned 0 (0x0)   execution time : 12.748 s
Press any key to continue.



Please enter a sentence: hello professor Chang!!! Wowiieeee.
HELLO PROFESSOR CHANG!!! WOWIIEEEE.

Process returned 0 (0x0)   execution time : 12.166 s
Press any key to continue.


*/

