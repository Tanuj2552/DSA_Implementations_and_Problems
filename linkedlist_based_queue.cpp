#include <iostream>
using namespace std;

class Node {
  public:
    int x;
    Node* next;
  Node() {
    next = NULL;
  }
  Node(int k){
    x = k;
    next = NULL;
  }
};

class Queue {
  public:
    Node* head;
    Node* top;
    Node* last;
    int len;

  Queue(){
    head = NULL;
    top = NULL;
    last = NULL;
    len = 0;
  }

// Here, I am doing insertion at the end but with the time complexity of O(1) by having a Node (last)
// which has the address of the last element;
  void enque(int k){
    if(len == 0){
      last = new Node(k);
      last->next = NULL;
      head = last;
      top = last;
      len++;
      return;
    }
    if(len == 1){
    Node* sub = new Node(k);
    last->next = sub;
    sub->next = NULL;
    last = sub;
    len++;
    head->next = last;
    return;
  }
    Node* sub = new Node(k);
    last->next = sub;
    sub->next = NULL;
    last = sub;
    len++;
  }

  void deque(){
    if(len == 0){cout << "Empty Queue, deletion not possible!!" << endl; return;}
    if(len == 1){head = NULL; top = NULL; last = NULL; len = 0;return;}
    head = head->next;
    len-- ;
  }

  void lens(){
    cout << "length of queue is " << len << endl;
  }

  void print(){
    if(len==0) {cout << "Empty Queue " << endl;return;}
    Node* temp;
    temp = head;
    cout << "the first element is the front element of the stack" << endl;
    while(temp!=NULL){
      cout << temp->x << endl;
      temp = temp->next;
    }
  }

  void front(){
    cout << "the first element of the queue is " << head->x << endl;
  }
};


int main(){
  int n;
  cout << "enter the number of elements of Queue" << endl;
  cin >> n;
  Queue q;
  for(int i=0;i<n;i++){
    cout << "enter it" << endl;
    int k;
    cin >> k ;
    q.enque(k);
  }
  q.front();
  q.print();
  q.lens();
  q.deque();
  q.print();
  q.lens();
  q.deque();
  q.deque();
  q.deque();
  q.deque();
  q.print();
  q.lens();
  q.deque();
  q.enque(2);
  q.lens();
  q.print();
}
