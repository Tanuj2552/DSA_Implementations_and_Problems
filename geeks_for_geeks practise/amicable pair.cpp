
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
  public:
    int isAmicable(int A , int B) {
        int suma = 0;
        int sumb = 0;
        int ma;
        if(A>B){ma = A;}
        else{ma = B;}
        for(int i=1;i<=ma/2;i++){
            if(A%i==0){suma += i;}
            if(B%i==0){sumb += i;}
        }
        if((suma == B)&&(sumb == A)){
            return 1;
        }
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.isAmicable(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends
