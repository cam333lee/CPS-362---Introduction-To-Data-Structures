//Question 1: recursive function for pattern
#include<iostream>
using namespace std;

//Prototype
int starPattern(int);
int binarySearch(int arr[], int item, int first, int last);

int main1() {

    //Star

    int userNum;
    cout << "How many mirroring lines of stars would you like? ";
    cin >> userNum;

    while(userNum < 0) {

        cout << "Please enter a nonnegative number!" << endl;

    }
    starPattern(userNum);


    //Binary Search
    int arr[10] = {1, 3, 4, 6, 9, 10, 14, 19, 23, 30};
    cout << sizeof(arr) << endl;




}

/*
-base case for pattern should never equal 0... base case = same number after recursion is over???
-
*/
int starPattern(int num) {

    int value = num; //Can check whether num is greater than itself
    cout << value;

    if(num > 0) { //base case

        starPattern(num-1);

    } /*else if(){

        for(int i = 0; i < num; i++) {

            cout <<"*";

        }
        cout << endl;

        return starPattern(num - 1);// + starPattern(num + 1);

    }

    else{

        if(num > 4)

        for(int i = 0; i < num; i++) {

            cout <<"*";

        }

        cout << endl;

        for(int j= num; j > 1; j--) {


            cout <<"*";

        }
        cout << endl;

        return starPattern(num - 1);

    }*/

}

int binarySearch(arr list[], int item, int first, int last) {

    if(first > last) {

        return -1;

    } else if(list[mid] == item) {

        return mid;

    } else if (item < list[mid]){

        return(binarySearch(list[], item, first, mid-1));

    } else {

        return(binarySearch(list[], item, first + 1, mid))

    }

}

