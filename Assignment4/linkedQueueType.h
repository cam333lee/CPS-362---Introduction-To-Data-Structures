//header file
#ifndef LINKEDQUEUETYPE_H
#define LINKEDQUEUETYPE_H
#include <iostream>
#include <queue>
using namespace std;

struct nodeType{
    char info;
    nodeType *link;
};

class linkedQueueType {

    public:
        //constructor, destructor
        linkedQueueType();
        ~linkedQueueType();
        linkedQueueType(const linkedQueueType & otherQueue);
        const linkedQueueType& operator=(const linkedQueueType&);
        void initializeQueue();
        bool isEmptyQueue() const;
        bool isFullQueue() const;
        char front() const;
        char back() const;
        void addQueue(const char& newItem); //adds to the back of the sequence
        void deleteQueue();

    private:
        nodeType * queueFront;
        nodeType * queueRear;
        void copyQueue(const linkedQueueType &otherQueue);
        //int maxQueueSize;


};

#endif //LINKEDQUEUETYPE_H
