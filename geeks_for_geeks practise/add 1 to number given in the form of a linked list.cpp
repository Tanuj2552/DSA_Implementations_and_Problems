// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 
// } Driver Code Ends


//User function template for C++

/* 

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

Node* addOne(Node *head) 
{
    Node* temp = head;
    stack <int> s;
    int l = 0;
    int c9 = 0;
    while(temp){
        int c = temp->data;
        if(c==9){c9++;}
        s.push(c);
        temp = temp->next;
        l++;
    }
    
    if(c9==l){
        Node* head2 = new Node(1);
        Node* final_ans = head2;
        while(c9--){
            Node* t3 = new Node(0);
            head2->next = t3;
            head2 = head2->next;
        }
        return final_ans;
    }
    
    else if(s.top()==9){
        Node* final_ans = new Node(0);
        s.pop();
        while(s.top()==9){
            Node* t3 = new Node(0);
            t3->next = final_ans;
            final_ans = t3;
            s.pop();
        }
        Node* temp2 = new Node(s.top()+1);
        s.pop();
        temp2->next = final_ans;
        final_ans = temp2;
        while(!s.empty()){
            Node* temp2 = new Node(s.top());
            temp2->next = final_ans;
            final_ans = temp2;
            s.pop();
        }
        return final_ans;
    }
    else{
        Node* final_ans = new Node(s.top()+1);
        s.pop();
        Node* te = final_ans;
        while(!s.empty()){
            Node* temp2 = new Node(s.top());
            temp2->next = te;
            te = temp2;
            s.pop();
        }
        return te;
    }
    
}
