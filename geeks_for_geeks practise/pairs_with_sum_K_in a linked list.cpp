// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}

int countPairs(struct Node* head1, struct Node* head2, int x);

int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        cout << countPairs(head1, head2, x) << '\n';
    }
    return 0;
}// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// your task is to complete this function

void deleteNode(Node *node)
{  
  if(node->next == NULL){node->next = NULL;node->data = -30000;node = NULL;return;}
  Node* temp = node->next;
  node->data = temp->data;
  node->next = temp->next;
}

void print(Node* node){
    Node* temp = node;
    while(node){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int countPairs(struct Node* head1, struct Node* head2, int x) {
    int ans = 0;
    unordered_set<int> s;
while(head1){
s.insert(head1->data);
head1 = head1->next;
}
while(head2){
if(s.find(x-head2->data)!=s.end())
ans++;
head2 = head2->next;
}
return ans;

}

