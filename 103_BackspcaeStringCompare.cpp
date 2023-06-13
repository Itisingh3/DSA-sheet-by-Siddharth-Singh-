class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        string s1="",t1="";
        for(auto ch:s){
            if(ch!='#'){
                st.push(ch);
                continue;
            }
            if(!st.empty())st.pop();
        }
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        for(auto ch:t){
            if(ch!='#'){
                st.push(ch);continue;
            }
            if(!st.empty())st.pop();
        }
        while(!st.empty()){
            t1+=st.top();
            st.pop();
        }
        return s1==t1;
    }
};
