#include <iostream>

#include <string>

using namespace std;

class Node {
  public: int data;
  Node * prev;
  Node * next;
  Node(int d) {
    this -> data = d;
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
  void view(string heading = "***") {
    cout << "\n";
    cout << "      " << heading << endl;
    cout << "| index |  data  |" << endl;
    cout << "------------------" << endl;
    Node * temp = this -> Head;
    int n = 1;
    while (temp != NULL) {
      cout << "| " << n << ".    |    " << temp -> data << "   |" << endl;
      temp = temp -> next;
      n++;
    }
    cout << "\n";
  }

  void insert(int data, int pos = -1) {
    if (pos > 0) {
      insertAt(data, pos);

      cout << "\033[1;32m" << data << " inserted " << "+" << "\033[0m " << " at " << pos << endl;
      return;
    }
    Node * temp = new Node(data);
    Current = temp;
    if (!this -> Head && !this -> Tail) {
      this -> Head = temp;
      this -> Tail = temp;
      return;
    } else if (this -> Head -> next == NULL)
      this -> Head -> next = temp;

    this -> Tail -> next = temp;
    temp -> prev = this -> Tail;
    this -> Tail = temp;
    cout << "\033[1;32m" << data << " inserted " << "+" << "\033[0m " << " at last" << endl;
  }

  void remove(int pos = -1) {
    if (pos > 0) {
      removeFrom(pos);
      return;
    }

    //removing last node
    Node * prevs = this -> Tail;
    prevs -> prev -> next = NULL;
    prevs -> prev = NULL;
    this -> Tail = prevs -> prev;
    delete prevs;

  }
  void undo() {
    this -> Current = this -> Current -> prev;
  }
  void redo() {
    this -> Current = this -> Current -> next;
  }
  private: void insertAt(int data, int pos) {
    Node * NewNode = new Node(data);
    if (pos == 1) {
      NewNode -> next = this -> Head;
      this -> Head = NewNode;
      return;
    }
    Node * curr = Head;
    Node * prev;
    while (pos > 1) {
      prev = curr;
      curr = curr -> next;
      pos--;
    }

    NewNode -> prev = prev;
    NewNode -> next = curr;
    NewNode -> prev -> next = NewNode;
    NewNode -> next -> prev = NewNode;
  }
  void removeFrom(int pos) {
    Node * temp = this -> Head;
    if (pos == 1) {
      this -> Head = temp -> next;
      temp -> next = NULL;
      delete temp;
      return;
    }

    while (pos > 1) {
      temp = temp -> next;
      pos--;
    }
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    temp -> next = NULL;
    temp -> prev = NULL;
    delete temp;
  }

};
int main() {
  LinkList stack1;
  //?   insert(data,Position<optional: default at end>)
  stack1.insert(5);
  stack1.insert(2);
  stack1.insert(3);
  stack1.insert(6);
  //   stack1.undo();
  //   stack1.undo();
  //   stack1.redo();
  //   stack1.undo();
  stack1.view("first");
  stack1.insert(7, 1);
  stack1.insert(7, 3);
  stack1.view("s7");
  stack1.remove(); //?  @params optional (default remove last)
  stack1.view("removed");
  stack1.remove(1);
  stack1.view("1st removed");
  stack1.remove(3);
  stack1.view("3rd removed");
  //   cout << stack1.Current -> data;

  return 0;

}