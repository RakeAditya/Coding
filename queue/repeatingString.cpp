#include<bits/stdc++.h>
using namespace std;
string solve(string &str)
{
    int n = str.size();
    // store occurance
    unordered_map<char,int> mp;
    string ans = "";
    queue<int> qu;
    for(int i=0;i<n;i++)
    {
        // count krenge character ko 
        char ch = str[i];
        mp[ch]++;
        // queue m daal do
        qu.push(ch);
        while(!qu.empty())
        {
            // agar repeat kr rha h character to queue s hata do
            if(mp[ch] > 1)
                qu.pop();
            // ni to agr non repeating h to queue m to rhega hi sath m mere ans m bhi aajaega
            else
            {
                ans.push_back(qu.front());
                break;
                // break taki jaise hmko non repeating character mile usko anser m daal k agle k lie check kr ske
            }
        }
        if(qu.empty())
            ans.push_back('#');
    }
    return ans;
    
}
int main()
{
    string str = "aabc";
    cout<<str<<endl;
    string ans = solve(str);
    cout<<"after processing \n";
    cout<<ans;
    return 0;
}