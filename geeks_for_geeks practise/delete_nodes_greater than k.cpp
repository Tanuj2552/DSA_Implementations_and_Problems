// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;      
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node * deleteNode(Node *, int);

void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}

}

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        string s;
        getline(cin,s);
        
        root = buildTree(s);
        int k;
        cin>>k;
        getchar();
        
    Node *R= deleteNode(root,k);
    	inorder(R);
      cout<<endl;
    }
}


// } Driver Code Ends


/*The node structure
struct Node {
int data;
Node * right, * left;
};*/

/*The function should return the root of the modified tree*/
void insert(Node* ans, int x){
    if(ans ->data > x){
        if(ans ->left){insert(ans->left, x);}
        else{ans->left = new Node(x);
        return;}
    }
    else{
        if(ans ->right){insert(ans->right, x);}
        else{ans->right = new Node(x);
        return;}
    }
}

Node* deleteNode(Node* root, int k)
{
    queue<Node*> q;
    q.push(root);
    vector<int> v;
    int l = 0;
    while(!q.empty())
    {
        Node* t2 = q.front();
        int x = t2->data;
        if(x < k){v.push_back(x);l++;}
        if(t2->right){q.push(t2->right);}
        if(t2->left){q.push(t2->left);}
        q.pop();
    }
    //for(int i = 0;i < l;i++){cout << v[i] << " ";}cout << endl;
    Node* ans = new Node(v[0]);
    for(int i = 1;i < l;i++){insert(ans, v[i]);}
    return ans;
}


