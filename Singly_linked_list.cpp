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
  while(temp->next){
    if(temp->next->data == k){
      temp ->next = temp->next->next;return;
    }
    temp = temp->next;
  }

    cout << "element not present in the linked list!! " << endl;
  return;
}

void find_pos(Node** h, int k){
  Node* temp = *h;
  int pos = 0;
  while(temp){
    if(temp->data == k){cout << "the element " << k << " is at position " << pos;return;}
    temp = temp->next;
    pos++;
  }
  cout << "element not found!!!" ;
}

int main(){
  int n;
  cout << "Enter the number of elements of the linked list: ";
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

  int ch;
  cout << "enter the element to be checked and find its pos : ";
  cin >> ch;
  find_pos(&head, ch);
  
  return 0;
}
