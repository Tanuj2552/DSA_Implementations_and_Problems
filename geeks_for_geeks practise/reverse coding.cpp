
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
  public:
    int revCoding(int n, int m) {
        if(((n*(n+1))/2)==m){return 1;}
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        
        cin>>n>>m;

        Solution ob;
        cout << ob.revCoding(n,m) << endl;
    }
    return 0;
}  // } Driver Code Ends
