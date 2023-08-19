#include <iostream>

#include <string>

using namespace std;

class Node {
  public: string data;
  Node * prev;
  Node * next;
  Node(string d) {
    if (this -> prev == NULL) {
      this -> data = d;
    } else {
      this -> data = this -> prev -> data + d;
    }
    this -> prev = NULL;
    this -> next = NULL;
  }
  ~Node() {
    cout << "\033[31m" << data << " deleted" << "\033[0m" << endl;
  }
};

class LinkList {
  public: Node * Head;
  Node * Tail;
  Node * Current;
  LinkList() {
    this -> Head = NULL;
    this -> Tail = NULL;
  }

  string now(){
    return this->Current->data;
  }
  void history() {
    cout<<"stack history"<<endl;
    Node * temp = this -> Head;
    while (temp != NULL) {
      cout  << temp -> data  << "-->";
      temp = temp -> next;
    }
    cout << "||\n";
  }

  void insert(string data, int pos = -1) {
    Node * temp = new Node(data);
    Current = temp;
    if (!this -> Head && !this -> Tail) {
      this -> Head = temp;
      this -> Tail = temp;
       cout << "\033[1;32m"<<"+ " << data<<"\033[0m "<<this->Current->data << endl;
      return;
    } else if (this -> Head -> next == NULL)
      this -> Head -> next = temp;

    this -> Tail -> next = temp;
    temp -> prev = this -> Tail;
    temp ->data = this -> Tail ->data + temp ->data;
    this -> Tail = temp;
    cout << "\033[1;32m"<<"+ " << data<<"\033[0m "<<this->Current->data << endl;
  }

  void remove() {

    Node * newNode;
    newNode->prev=this->Tail;
    newNode->next=NULL;
    newNode->data=this->Tail->prev->data;
    this -> Tail->next=newNode;
    this->Tail=newNode;
    this->Current=newNode;
     cout << "\033[31m" << " deleted" << "\033[0m" << endl;
     cout<<"Current "<< this -> Current -> data<<endl;
  }

  void undo() {
    cout<<"<<<"<<endl;
    this -> Current = this -> Current -> prev;
    cout<<"Current "<< this -> Current -> data<<endl;
  }
  void redo() {
     cout<<">>>"<<endl;
    this -> Current = this -> Current -> next;
    cout<<"Current "<< this -> Current -> data<<endl;
  }

};

int main() {
  
  LinkList stack1;
  stack1.insert("a");
  stack1.insert("b");
  stack1.insert("c");
  stack1.insert("d");
  stack1.remove(); 
  stack1.undo();
  stack1.undo();
  stack1.undo();
  stack1.redo();
  cout<<"now "<<stack1.now()<<endl;
  stack1.history();


  return 0;

}
