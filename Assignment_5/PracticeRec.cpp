//Printing 4 lines of 4

#include <iostream>
using namespace std;

int rec1(int a);
void selectionSort(int list[], int length);
int minLocation(int list[], int first, int last);
void swap(int list[], int first, int second);


int binarySearch(int arr[], int , int , int );


int main() {

    //Star
    int a = 4;
    rec1(a);

    int userNum;
    //Binary Search
    cout << "What is the item number that you would like to search: ";
    cin >> userNum;
    int arr[10] = {1, 3, 4, 6, 9, 10, 14, 19, 23, 30};
    int arrSize = sizeof(arr);
    int pos = binarySearch(arr, userNum, 0, arrSize -1);

    if(pos != -1) {

        cout << userNum << " found at position: " << pos << endl;

    } else {

        cout << userNum << " is not in the list\n";

    }


    //Selection Sort
    const int SIZE = 10;
    int intList[SIZE] = {5, 2, 7, 6, 34, 18, 4, 82, 1256, 69};

    selectionSort(intList, SIZE);

    cout << "After sorting, the list is: ";
    for(int i = 0; i < SIZE; i++) {

        cout << intList[i] << " ";

    } cout << endl;



    return 0;
}


//TRY TO PRINT 4 STARS IN 4 ROWS
int rec1(int num) {

    if(num > 0) {

        for(int i = 0; i < num; i++) {

            cout << "*";

        }

        cout << endl;

        rec1(num-1);

        for(int i = 0; i < num; i++) {

            cout << "*";

        }

        cout << endl;

    }

}

int binarySearch(int arr[], int item, int first, int last) {

    int mid = (first + last) /2; //looking for array based value

    if(first > last) {

        return -1;

    } else if(arr[mid] == item) {

        return mid;

    } else if (item < arr[mid]){

        return(binarySearch(arr, item, first, mid-1));

    } else {

        return(binarySearch(arr, item, mid + 1, last));

    }

}

void selectionSort(int list[], int length) {

    int minIndex;

    for(int index = 0; index < length; index++) {

        minIndex = minLocation(list, index, length-1);
        swap(list, index, minIndex);

    }

}
int minLocation(int list[], int first, int last) {

    int minIndex = first;
    for (int loc = first + 1; loc <= last; loc++) {

        if(list[loc] < list[minIndex]) {

            minIndex = loc;

        }

    }

    return minIndex;

}
void swap(int list[], int first, int second) {

    int temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;

}

/*OUTPUT
****
***
**
*
*
**
***
****
What is the item number that you would like to search: 28
28 is not in the list
After sorting, the list is: 2 4 5 6 7 18 34 69 82 1256

Process returned 0 (0x0)   execution time : 2.779 s
Press any key to continue.


****
***
**
*
*
**
***
****
What is the item number that you would like to search: 9
9 found at position: 4
After sorting, the list is: 2 4 5 6 7 18 34 69 82 1256

Process returned 0 (0x0)   execution time : 15.553 s
Press any key to continue.
*/
