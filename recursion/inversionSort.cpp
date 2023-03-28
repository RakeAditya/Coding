#include<bits/stdc++.h>
using namespace std;
 
//  brute force
void calc(vector<int> &arr, vector<int>&ans)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            count++;
        }
        ans[i] = count;
    }
}

// optimized merge
void solve(vector<int>& arr, vector<int>&ans)
{
    
}
int main()
{
    vector<int> arr {8,1,4,2};
    vector<int> ans(arr.size(),0);
    calc(arr,ans);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}