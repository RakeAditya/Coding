#include<bits/stdc++.h>
using namespace std;
bool func(string str)
{
    stack<char> st;
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        // opening bracket
        if(ch == '(' || ch == '{' || ch == '[' )    
            st.push(ch);
        else
        {
            if(st.empty())
                return 0;
            else
            {
                char top = st.top();
                if((top=='(' && ch==')') || (top=='{' && ch=='}') || (top=='[' && ch==']'))
                    st.pop();
                else
                    return 0;
            }
        }
    }
    return 1;
}
int main()
{
    string str1 ="{[()]}";
    string str2 = "()}";
    bool ans = func(str1);
    cout<<ans;
    return 0;
}