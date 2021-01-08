#include <iostream>
#include <math.h>
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

int get_len(Node** h){
   Node* temp = *h;
  int l = 0;
  while(temp){
    l++;
    temp = temp->next;
  }
  return l;
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
    if(temp->data == k){cout << "the element " << k << " is at position " << pos << endl;return;}
    temp = temp->next;
    pos++;
  }
  cout << "element not found!!! " << endl;
}

void swap_values_of_given_indices (Node** h, int p, int q){
  if(p>=get_len(h) || q>=get_len(h)){
    cout << "indices out of range!! " << endl; return;
  }
  else if(p==q){cout << "no change !!" << endl; return;}
  int c = 0;
  int m = min(p,q);
  int n = p+q-m;
  Node* temp = *h;
  int a,b;
  Node* temp_1=NULL;
  Node* temp_2=NULL;
  while(temp){
    if(m==c){
      temp_1 = temp;
      a = temp->data;
    }
    else if(n==c){
      temp_2 = temp;
      b = temp->data;
    }
    temp = temp->next;
    c++;
  }
  temp_1->data = b;
  temp_2->data = a;

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

  int m_swap,n_swap;
  cout << "Enter the indices of the linked lists to be swapped " << endl;
  cin >> m_swap >> n_swap;
  swap_values_of_given_indices(&head, m_swap,n_swap);

  print_list(&head);
  return 0;
}
