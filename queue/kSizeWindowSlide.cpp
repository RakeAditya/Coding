#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(auto it : arr)
        cout<<it<<"\t";
    cout<<endl;
}
vector<int> solve(vector<int> &arr, int k)
{
    vector<int> ans;
    queue<int> qu;
    // first k size window banae jisme agr koi negative number h to wo hi aaega bs
    for(int i=0;i<k;i++)
    {
        if(arr[i] < 0)
            qu.push(arr[i]);
    }
    // store 1st k window k anser
    if(!qu.empty())
    {
        ans.push_back(qu.front());
    }
    else    
        ans.push_back(0);
    // agle bache hue k lie
    for(int i=k;i<arr.size();i++)
    {
        // remove kro phle
        if(!qu.empty() && arr[k-i] == qu.front())
            qu.pop();
        if(arr[i] < 0)
            qu.push(arr[i]);
        if(!qu.empty())
        {
            ans.push_back(qu.front());
        }
        else    
            ans.push_back(0);
    }
    return ans;
} 
int main()
{
    vector<int> arr{-8,2,3,-6,10};
    int k=2;
    print(arr);
    cout<<"anser is\n";
    vector<int> ans = solve(arr,k);
    print(ans);
    return 0;
}