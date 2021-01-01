#include <iostream>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  Node(){
    next = NULL;
  }
  Node(int x){
      data = x;
      next = NULL;
  }
};

void insert_at_head(Node** h, int x){
  if(!(*h)){*h = new Node(x);return;}
  Node* temp = *h;
  while(temp->next){temp = temp->next;}
  Node* n = new Node(x);
  temp->next = n;
}

void print_list(Node** h){
  Node* temp = *h;
  while(temp){
    cout << temp->data << " " ;
    temp = temp->next;
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  Node* head = NULL;
  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    insert_at_head(&head,x);
  }
  print_list(&head);
}
