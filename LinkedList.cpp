#include "LinkedList.h"

bool Node::pass_finished = false;

Node::Node(int payload, Node *next){
    this->_payload = payload;
    this->_next = next;
}

Node::~Node(){
    if(_next != NULL){
        delete _next;
    }
}

int Node::payload(){
    return _payload;
}

Node *Node::next(){
    if(this->_next == NULL){
        Node::pass_finished = true;
        // *Optional debug line
        // cout << endl << "Reached end of list. Iterating is no longer allowed" << endl;
    }
    return pass_finished ? NULL : this->_next;
}



Node* generateRandomLinkedList(int n){
    int maxValue = 1000;
    Node* head = NULL;
    for(int i=0; i<n; i++){
        int randomPayload = rand()%(maxValue+1);
        head = new Node(randomPayload, head);
    }
    return head;
}


Node* linkedListFromVector(const vector<int>& data){
    Node* head = NULL;
    for(vector<int>::const_reverse_iterator it=data.rbegin(); it!=data.rend(); it++){
        head = new Node(*it, head);
    }
    return head;
}