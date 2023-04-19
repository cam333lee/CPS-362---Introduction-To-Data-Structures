//linkedQueueType.cpp
#include <iostream>
#include "linkedQueueType.h"
using namespace std;

//default constructor
linkedQueueType::linkedQueueType() {

    queueFront = NULL;
    queueRear = NULL;

}

const linkedQueueType& linkedQueueType::operator=(const linkedQueueType& otherQueue) {

    if(this != &otherQueue) {
        copyQueue(otherQueue);
    }

    return *this;
}

//copy Constructor
linkedQueueType::linkedQueueType(const linkedQueueType& otherStack) {

    queueFront = NULL;
    copyQueue(otherStack);

}

linkedQueueType::~linkedQueueType() {

    initializeQueue();

}

bool linkedQueueType::isEmptyQueue() const {

    return(queueFront == NULL);

}

bool linkedQueueType::isFullQueue() const {

    return false;

}

void linkedQueueType::initializeQueue() {

    nodeType *temp;

    while(queueFront != NULL) {

        temp = queueFront;
        queueFront = queueFront->link;
        delete temp;

    }

    queueRear = NULL;

}

void linkedQueueType::addQueue(const char & newItem) {

    nodeType * newNode;
    newNode = new nodeType;

    newNode->info = newItem;
    newNode->link = NULL;
    if(queueFront == NULL) {

        queueFront = newNode;
        queueRear = newNode;
    } else {

        queueRear->link = newNode;
        queueRear = newNode;

    }

}

char linkedQueueType::front() const{

    return queueFront->info;

}

char linkedQueueType::back() const {

    return queueRear->info;

}

void linkedQueueType::deleteQueue() {

    nodeType *temp;

    if(!isEmptyQueue()) {

        temp = queueFront;
        queueFront = queueFront -> link;

        delete temp;

        if(queueFront == NULL) {

            queueRear = NULL;

        }

    } else {

        cout << "Cannot remove from an empty queue." << endl;

    }



}


//copy queue

void linkedQueueType::copyQueue(const linkedQueueType &otherQueue) {

    nodeType *newNode, *current, *last;

    if(queueFront != NULL)
        initializeQueue();

    if(otherQueue.queueFront == NULL)
        queueFront;
    else {

        current = otherQueue.queueFront;
        queueFront = new nodeType;
        queueFront->info = current->info;
        queueFront->link = NULL;
        last = queueFront;
        current = current->link;

        while(current != NULL) {

            newNode = new nodeType;
            newNode->info = current->info;
            last->link = newNode;
            last = newNode;
            current = current->link;

        }

    }

}


