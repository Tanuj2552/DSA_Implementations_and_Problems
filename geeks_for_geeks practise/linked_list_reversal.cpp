// the link for the question is https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *reverseList(struct Node *head);

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        head = reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

#include <stack>
struct Node* reverseList(struct Node *head)
{
    stack <int> s;
    Node* temp = head;
    while(temp){
        s.push(temp->data);
        temp = temp->next;
    }
    Node* ans =new Node(s.top());
    s.pop();
    Node* te = ans;
    while(!s.empty()){
        Node* tem = new Node(s.top());
        te->next = tem;
        te = tem;
        s.pop();
    }
    
    return ans;
}
