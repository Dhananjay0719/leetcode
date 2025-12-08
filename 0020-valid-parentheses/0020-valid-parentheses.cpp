class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='[')
            {
                st.push(ch);    
            }
            else{
                if(st.empty()) return false;
                char elem=st.top();
                st.pop();
                if(ch==')' && elem!='(') return false;
                else if(ch=='}' && elem!='{') return false;
                else if(ch==']' && elem!='[') return false;
            }
        }
        return st.empty();
    }
};