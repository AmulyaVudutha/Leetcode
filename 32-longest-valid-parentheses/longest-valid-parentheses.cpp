class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> st;
        st.push(-1);
        int ans,maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push(i);
            else
            {
                st.pop();
                if(!st.empty())
                {
                    ans=i-st.top();
                    maxi=max(maxi,ans);
                }
                else
                st.push(i);
            }
        }
        return maxi;
    }
};