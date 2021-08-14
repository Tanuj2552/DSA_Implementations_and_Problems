
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include <math.h>
#include <sstream>
#include <algorithm>
int contint(char s){
    stringstream ss;
    ss <<s;
    int x;
    ss >>x;
    return x;
}

class Solution {
  public:
    string findMax(string N) {
        int arr[10];
        int n = N.length();
		for(int i=0;i<=9;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[contint(N[i])]++;
        }

        string max="";

        for(int i=9;i>=0;i--){
            while(arr[i]-- > 0){
                int temp = i;
                max += to_string(temp);
            }
        }
        return max;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
