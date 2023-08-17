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

void deleteNode(Node* &Head,Node* &Tail, int position){

    if(position==1){
        Node* temp=Head;
        Head=Head->nextNode;
        temp->nextNode=NULL;
        delete temp;
        return;
    }
    Node* curentNode = Head;
    Node* prevNode = Head;
    int index = 1;
    while (index < position ) {
      prevNode=curentNode;
        curentNode = curentNode -> nextNode;
      if(prevNode -> nextNode==NULL) {
        cout<<"No Node present at position at "<<position<<endl;
        return;
      }

    index++;
  }

   if(curentNode->nextNode==NULL){
       prevNode->nextNode=NULL;
       Tail=prevNode;
  }else{
    prevNode->nextNode=curentNode->nextNode;
  }
  
 delete curentNode;
  
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
  Node *node1 = new Node(7);
  Node *Head = node1;
  Node *Tail = node1;
  insertAtLast(Tail, 19);
  displayList(Head);
  insertAtStart(Head, 56);
  displayList(Head);
  insertAt(Head, 34, 3);
  displayList(Head);
  deleteNode(Head,Tail, 3);
  displayList(Head);
  cout<<Tail->data<<"tail"<<Head->data<<"head"<<endl;
  return 0;
}