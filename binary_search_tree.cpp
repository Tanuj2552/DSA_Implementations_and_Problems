#include <iostream>
using namespace std;
#include <queue>

class Node {
  public:
    Node* left;
    Node* right;
    int x;

  Node(){
    left = NULL;
    right = NULL;
  }

  Node(int k){
    left = NULL;
    right = NULL;
    x = k;
  }
};

class binary_search_tree{
  public:
    Node* Root;

  binary_search_tree()
  {
    Root = NULL;
  }

void insert(int k)  {
    if (Root == NULL) {
      Root = new Node(k);
      return;
    }
    Node* sub = Root;
    Node* temp = new Node(k);
    int c = 0;
  while ((sub->right != NULL) || (sub->left != NULL))  {
   if (k <= sub->x){
     if(sub->left == NULL) {sub->left = temp;c=1; }
     else {sub = sub->left;}
   }
   else{
     if(sub->right == NULL) {sub->right = temp;c=1;}
     else {sub = sub->right;}
   }
}
    if (c!=1){
    if (k<=sub->x) {sub->left = temp;}
    else {sub->right = temp;}
  }
}

void check(int k){
  Node* sub = Root;
  int c = 0;
  if(sub->x == k){cout << "found" << endl;return; }
  while ((sub->right) || (sub->left)){
    if(k<=sub->x){sub = sub->left;}
    else {sub = sub->right;}
    if(k == sub->x) {cout << "found" << endl;return;}
  }
  cout << "not found" << endl;
}

void max() {
  if(Root == NULL){cout << "emtpy tree " << endl;return;}
  Node* sub = Root;
  int c = sub->x;
  while(sub->right != NULL){
    sub = sub->right;
    if(c < sub->x) {c = sub->x;}
  }
  cout <<"max number of the tree is :" << c << endl;
}

void min() {
  if(Root == NULL){cout << "emtpy tree " << endl;return;}
  Node* sub = Root;
  int c = sub->x;
  while(sub->left != NULL){
    sub = sub->left;
    if(c > sub->x) {c = sub->x;}
  }
  cout <<"min number of the tree is : " << c << endl;
}

int height(Node* sub) {
    if(sub == NULL) {return -1;}
    else if ( height(sub->left) > height(sub->right) ){
      return height(sub->left) + 1;
        }
    else {
      return height(sub->right) + 1;
        }
  }

void linear_traversal (){
  queue<Node*> q;
  q.push(Root);

  cout << "starting linear_traversal of tree: " << endl;
  while(!q.empty()){
      Node* sub = q.front();
      if(sub->left != NULL) {q.push(sub->left);}
      if(sub->right != NULL) {q.push(sub->right);}
      cout << sub->x << endl;
      q.pop();
  }
  cout << "ended" << endl;
}

void pre_order(Node* sub){
    if(sub == NULL) {return;}
    cout << sub->x << endl;
    pre_order(sub->left);
    pre_order(sub->right);
  }

void in_order(Node* sub){
      if(sub == NULL) {return;}
      in_order(sub->left);
      cout << sub->x << endl;
      in_order(sub->right);
    }

void post_order(Node* sub){
      if(sub == NULL) {return;}
      post_order(sub->left);
      post_order(sub->right);
      cout << sub->x << endl;
    }


    Node* min_root(Node* sub) {
      if(sub == NULL){return NULL;}
      sub = sub->right;
      int c = sub->x;
      Node* temp = new Node();
      while(sub->left != NULL){
        sub = sub->left;
        if(c > sub->x) {c = sub->x; temp = sub;}
      }
      return temp;
    }

Node* delete_it(Node* sub, int k){
    if(k < sub->x) {sub->left = delete_it(sub->left,k);}
    else if(k > sub->x) {sub->right = delete_it(sub->right,k);}
    else{
      if(sub->left == NULL){
        Node* temp = sub->right;
        delete sub;
        return temp;}
      else if(sub->right == NULL){
        Node* temp = sub->left;
        delete sub;
        return temp;}
      else{
        Node* temp = min_root(sub);
        int m = temp->x;
        sub->x = m;
        sub->right = delete_it(temp, m);
      }
    }
    return sub;
}


};

int main(){
  binary_search_tree b;
  int n;
  cout << "enter the count of numbers " << endl;
  cin >> n;
  for(int i=0;i<n;i++){
    int k;
    cout << "enter it " << endl;
    cin >> k;
    b.insert(k);
  }
  cout << "enter the number to be searched " << endl;
  int c;
  cin >> c;
  b.check(c);
  b.max();
  b.min();
  int h = b.height(b.Root); cout << "height of the tree is: " << h << endl;
  b.linear_traversal();

  cout << "pre order traversal is: " << endl;
  b.pre_order(b.Root);
  cout << "in order traversal is: " << endl;
  b.in_order(b.Root);
  cout << "post order traversal is: " << endl;
  b.post_order(b.Root);

  int d;
  cout << "enter the number you want to delete..?" << endl;
  cin >> d;
  //b.Root = b.delete_it(b.Root,d);
  b.delete_it(b.Root,d);
  b.linear_traversal();

  return 0;
}

