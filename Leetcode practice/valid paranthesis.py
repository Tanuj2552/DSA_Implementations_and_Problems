class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans = true;
        
        
        for(int i=0;i<s.length();i++){
            if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')){
                st.push(s[i]);
            }
            else if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.top() == '('){
                st.pop(); continue;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i] == '}'){
                if(st.top() == '{'){
                    st.pop();continue;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i] == ']'){
                if(st.top() == '['){
                    st.pop(); continue;
                }
                else{
                    ans = false;
                    break;
                }
            }
            
        }
        
        if(ans == true){if(!st.empty()){ans = false;}}
        return ans;
        
        
    }
};
