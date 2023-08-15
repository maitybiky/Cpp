#include <iostream>

using namespace std;
class Node {
  public: int data;
  Node * nextNode;
  Node(int data) {
    this -> data = data;
    this -> nextNode = NULL;
  }
  ~Node(){
    cout<<"\033[31m"<<data<<" deleted"<<"\033[0m"<<endl;
  }
};

void insertAtStart(Node * & Head, int data) {
  Node * latestNode = new Node(data);
  latestNode -> nextNode = Head;
  Head = latestNode;
}

void insertAtLast(Node * & Tail, int data) {
  Node * latestNode = new Node(data);
  Tail -> nextNode = latestNode;
  Tail = latestNode;
}

void insertAt(Node * & Head, int data, int position) {
  Node * temp = Head;
  int index = 1;
  while (index < position - 1) {
    temp = temp -> nextNode;
    index++;
  }

  Node * newNode = new Node(data);
  newNode -> nextNode = temp -> nextNode;
  temp -> nextNode = newNode;

}

void deleteNode(Node* &Head, int position){

    if(position==1){
        Node* temp=Head;
        Head=Head->nextNode;
        delete temp;
        return;
    }
    Node* prevNode = Head;
    int index = 1;
    while (index < position - 1) {
    prevNode = prevNode -> nextNode;
    index++;
  }
  Node* willDel=prevNode->nextNode;
  prevNode->nextNode=willDel->nextNode;
  delete willDel;
}

void displayList(Node * & Head) {
  Node * startNode = Head;
  cout << "------" << endl;
  while (startNode != NULL) {
    cout << startNode -> data << endl;
    startNode = startNode -> nextNode;
  }
  cout << "------" << endl;

}



int main() {
  Node * node1 = new Node(7);
  Node * Head = node1;
  Node * Tail = node1;
  insertAtLast(Tail, 19);
  displayList(Head);
  insertAtStart(Head, 56);
  displayList(Head);
  insertAt(Head, 34, 3);
  displayList(Head);
  deleteNode(Head, 3);
  displayList(Head);

  return 0;
}