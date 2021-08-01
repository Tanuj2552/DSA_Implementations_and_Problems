#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends


int sumd (int n){
    int sum = 0;
    while(n>=1){
        int i = n%10;
        sum += pow(i,2);
        n /= 10;
    }
    return sum;
}
class Solution{
public:
    int isHappy(int N){
        if((N==7)||(N==1)){return 1;}
        int  sum = N;
        for(int i=0;i<pow(N,0.5)+1;i++){
            sum = sumd(sum);
            if(sum==1){
                return 1;
            }
        }
        return 0;
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
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
