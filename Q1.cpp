#include "Q1.h"
#include <iostream>
double findCenter(Node* head){
  Node* slow = head;
  Node* fast = head;
  double val;
  while(fast->next() != NULL && fast->next()->next()){
    std::cout << "SLOW: " << slow->payload() << "FAST: " << fast->payload() <<std::endl;
    fast = fast->next()->next();
    //fast = (*fast).next();
    slow = slow->next();
    val = slow->payload();


  }
  return val;

  //return 0.0;
}

int main(int argc, char* argv[]){
  Node* list = generateRandomLinkedList(10);
  /*Node* copy = list;
  
  while(copy->next() != NULL){
    
    std::cout << copy->payload() << " \n";
    copy = copy->next();
    }*/
  std::cout << '\n';
  std::cout << "Mid: " << findCenter(list) << std::endl;
}
