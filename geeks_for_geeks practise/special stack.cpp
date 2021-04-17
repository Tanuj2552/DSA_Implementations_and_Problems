// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends


/*Complete the function(s) below*/
int size = 0;
int mins = 0;
int diffmin = 0;
void push(int a)
{
    if(size==0){mins = a; diffmin = a;}
    if(mins > a){diffmin = mins - a; mins = a;}
    s.push(a);
    size++;
}

bool isFull(int n)
{
     if(size == n){return true;}
     return false;
}

bool isEmpty()
{
    if(size==0){return true;}
    return false;
}

int pop()
{
    size--;
    if(s.top() != mins){
        int i = s.top();
        s.pop();
        return i;
    }
    int i = s.top();
    mins = mins + diffmin;
    s.pop();
    return i;

}

int getMin()
{
   return mins;
}
