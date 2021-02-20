// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


int fac(int n){
    if(n==1){return 1;}
    for (int i=2; pow(i,2) <= n;i+=2){
        if(n%i==0){
            return i;
        }
        if(i==2){
            i--;
        }
    }
    return n;
}
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector <int> ve;
        ve.push_back(0);
        for(int i=1;i<=n;i++){
        ve.push_back(fac(i));
        }
        return ve;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}
  // } Driver Code Ends
