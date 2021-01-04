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
  cout << "The linked list is : ";
  while(temp){
    cout << temp->data << " " ;
    temp = temp->next;
  }
  cout << endl;
}

void lens(Node** h){
  Node* temp = *h;
  int l = 0;
  while(temp){
    l++;
    temp = temp->next;
  }
  cout << "len of linked list is " << l << endl;
}

void delete_element(Node** h, int k){
  Node* temp = *h;
  if(temp->data == k){*h = temp->next;return ;}
  int c = 0;
  while(temp->next){
    if(temp->next->data == k){
      temp ->next = temp->next->next;c++;
    }
    temp = temp->next;
  }
  if(c!=1)
    cout << "element not present in the linked list!! " << endl;
  return;
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
  lens(&head);

  int dele;
  cout << "enter the element to be deleted :" << endl;
  cin >> dele;
  delete_element(&head, dele);
  print_list(&head); 
  return 0;
}
