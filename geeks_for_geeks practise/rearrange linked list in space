// { Driver Code Starts
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node *inPlace(Node *root)
{
    int arr[100];
    Node* temp = root;
    int l = 0;
    while(temp){
        arr[l] = temp->data;
        temp = temp->next;
        l++;
    }
    temp = root;
    for(int i=0;i<l/2;i++){
        temp->data = arr[i];
        temp = temp->next;
        temp->data = arr[l-i-1];
        temp = temp->next;
    }
    if(l%2!=0){temp->data = arr[l/2];}
    return root;
}
