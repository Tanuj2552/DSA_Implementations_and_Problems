#include <iostream>
using namespace std;

class Node {
  public:
    int x;
    Node* next;

  Node(int k){
    x = k;
  }
};

class Stack {
  public:
    Node* head;
    int l;

  Stack(){
    head = NULL;
    l = 0;
  }

void push (int k){ cout << "cool" << endl;
  Node* sub = new Node(k);
  l++;
  if(head == NULL){
    head = sub;
    sub->next = NULL;
    return;
  }
  Node* temp = head;
  sub->next = temp;
  head = sub;
}

int top(){
  cout << "the first element of the stack is: " << endl;
  return head->x;
}

void pop(){
  cout << "popped" << endl;
  head = head->next;
  l--;
}

int len(){
  cout << "Length of stack is: " << endl;
  return l;
}

void print(){
  Node* temp = head;
  cout << "the current stack is: " << endl;
  while(temp!=NULL){
    cout << temp->x << endl;
    temp = temp->next;
  }
}

};


int main(){
  Stack s;
  for(int i=0; i<5; i++){
    s.push(i);
  }
  s.print();
  s.pop();
  cout << s.len() << endl;
  s.print();
  s.pop();
  cout << s.len() << endl;
  s.print();
  cout << s.top() << endl;
  return 0;
}
