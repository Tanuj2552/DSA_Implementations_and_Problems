

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution {
  public:
    long long nthFaithfulNum(int N) {
        int l = 0;
        int n = N;
        long long ans = 0;
        while(n > 0){
            //cout << n << endl;
            int r = n%2;
           
            ans += r*(pow(7,l));
            n = n/2;
            l++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
