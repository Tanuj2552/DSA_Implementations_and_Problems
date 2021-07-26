//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


//User function Template for C++
class Solution{   
public:
    int waysToBreakNumber(int N){
    int  k = N%3;
    int q = (N-k)/3;
    if(k==2){return (q+1)*(3*q + 4)*(1.5);}
    else if (k==1){return (q+1)*(3*q + 2)*(1.5);}
    else{return 4.5*(q*q + q) + 1;}
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.waysToBreakNumber(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
