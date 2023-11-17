class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i<s.size(); i++){
            char currentChar = s[i];
            if(currentChar == '{' || currentChar == '[' || currentChar == '(' ){
                st.push(currentChar);
            }else{
                if(currentChar == '}' && !st.empty() && st.top() == '{'){
                    st.pop();
                }else if(currentChar == ']' && !st.empty() && st.top() == '['){
                    st.pop();
                }else if(currentChar == ')' && !st.empty() && st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};