#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        cout<<ch;
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends



//return the address of the string
char* reverse(char *S, int len)
{
    stack <char> s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    char* ss = new char[len];
    for(int i=0;i<len;i++){
        *(ss+i) = s.top();
        s.pop();
    }
    ss[len] = '\0';
    return ss;
}
