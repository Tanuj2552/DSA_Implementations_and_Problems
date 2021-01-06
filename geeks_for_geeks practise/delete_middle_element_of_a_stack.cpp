// the link for the question is https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution {
public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int l = sizeOfStack;
        int arr[l];
        int mid = ceil(l/2);
        for(int i=0;i<mid;i++){
            arr[i] = s.top();
            s.pop();
        }
        s.pop();
        for(int i=0;i<mid;i++){
            s.push(arr[mid-i-1]);
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends
