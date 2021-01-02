#include <iostream>
using namespace std;

class Node{
  public:
    int x;
    Node* next;
};

class Circular_linked_list{
  public:
    Node* head;

    Circular_linked_list(){
      head = NULL;
  }

  void insert_at_beginning (int k){
    Node* sub = new Node();
    sub->x = k;
    if(head==NULL){
      head = sub;
      sub->next = head;
      return;
    }
    Node* temp = head;
    Node* temp2 = head;
    head = sub;
    sub->next = temp;
    while(temp->next!=temp2){
      temp = temp->next;
    }
    temp->next = sub;
    }

  void insert_at_end(int k){
    Node* sub = new Node();
    sub->x = k;
    if(head == NULL) {
      head = sub;
      sub->next = head;
      return;
    }
    Node* std = head;
    Node* temp = head;
    while(temp->next != std){
      temp = temp->next;
    }
    temp->next = sub;
    sub->next = head;
    }

  void print(){
      Node* std = head;
      Node* temp = head;
      cout << "the element of the list are : " << endl;
      while(temp->next != std){
        cout << temp->x << endl;
        temp = temp->next;
      }
      cout << temp->x << endl;
    }

    //Almost all other functions can be done very similar as in the case of Singly_linked_list;
    //So, moving on to doubly_linked_list;

};


int main(){
  Circular_linked_list h;
  int n;
  cout << "enter the number of elements of the list: " << endl;
  cin >> n;
  for(int i=0;i<n;i++){
    cout << "Enter the element" << endl;
    int k;
    cin >> k;
    h.insert_at_end(k);
  }
h.print();


}
