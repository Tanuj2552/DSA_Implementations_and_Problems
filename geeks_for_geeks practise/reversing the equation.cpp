// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> s1;
            string num="";
            for(int i=0;i<s.length();i++){
                if(isdigit(s[i])){
                    num += s[i];
                }
                else if((s[i] =='+') ||(s[i] =='-')||(s[i] =='*')||(s[i] =='/')||(isalpha(s[i]))){
                    //cout << "num is " << num << endl;
                   s1.push(num);
                    num = "";
                  string tem;
                  tem = s[i];
                  //cout << "tem is " << tem << endl;
                  s1.push(tem);
                }
                if(i == s.length()-1){
                    //num += s[i];
                    s1.push(num);
                }
              
            }

            string ans = "";
            while(!s1.empty()){
                ans += s1.top();
                s1.pop();
            }
        return ans;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
