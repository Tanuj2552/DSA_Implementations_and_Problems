#include <iostream>
using namespace std;

class Node{
  public:
    int x;
    Node* next;
    Node* prev;

  Node(){
    next = NULL;
    prev = NULL;
    x = 0;
  }
  Node(int k){
    x = k;
  }

};

class doubly_linked_list{
  public:
    Node* head;

  doubly_linked_list(){
    head = NULL;
  };

  void insert_at_beginning(int k){
    Node* sub = new Node(k);
    if(head == NULL){
    sub->prev = head;
    head  = sub;
    sub->next = NULL;
    return;
  }
    Node* temp = head;
    sub->next = temp;
    sub->prev = head;
    head = sub;
    temp->prev = sub;
}

  void insert_at_end(int k){
    Node* sub = new Node(k);
    if(head == NULL){
    sub->prev = head;
    head  = sub;
    sub->next = NULL;
    return;
  }
    Node* temp = head;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = sub;
    sub->prev = temp;
    sub->next = NULL;
  }

  int len(){
    int c = 0;
    Node* temp = head;
    while(temp!=NULL){
      c++;
      temp = temp->next;
    }
    return c;
  }

  void print(){
    Node* h = head;
    while(h != NULL){
      cout << h->x << endl;
      h = h->next;
    }
  }

};

int main(){
  doubly_linked_list h;
  int n;
  cout << "enter the number of elements of the list" << endl;
  cin >> n;
  for(int i=0;i<n;i++){
    int k;
    cout << "enter the number" << endl;
    cin >> k;
    h.insert_at_end(k);
  }
  h.print();
  cout << "len of the array is: " << h.len() << endl;

}
