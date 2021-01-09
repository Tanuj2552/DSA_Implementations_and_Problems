//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++
int func(long long n){
    long long i;
    for(i=2;i*i<=n;i=i+2){
        if(n%i==0){return 0;}
        if(i==2){i--;}
    }
    return 1;
    
    
}
class Solution{
	public:
   	long long int prime_Sum(int n){
   	    long long i;
   	    long long sum=0;
   	    for(i=2;i<=n;i++){
   	        if(func(i)){sum+=i;}
   	    }
   	return sum;
   	    // Code here
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
