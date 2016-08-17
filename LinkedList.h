#ifndef ASSIGNMENTS_LINKEDLIST_H
#define ASSIGNMENTS_LINKEDLIST_H

#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

class Node{
private:
    static bool pass_finished;
    Node* _next;
    int _payload;

public:
    Node(int payload, Node *next);
    ~Node();
    int payload();
    Node *next();

    // pay no attention to this..
    friend bool runTest(double &totalTime, const vector<int> &data, double expected);
    //
};


Node* generateRandomLinkedList(int n);
Node* linkedListFromVector(const vector<int>& data);

#endif //ASSIGNMENTS_LINKEDLIST_H
