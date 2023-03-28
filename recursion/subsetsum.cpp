#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>&arr, int index, int sum, vector<int>&ans)
{
    if(index >= arr.size())
    {
        ans.push_back(sum);
        return;
    }
    // nahi pick kie to
    subset(arr,index+1,sum,ans);
    // pick kie to
    sum += arr[index];
    subset(arr,index+1,sum,ans);
    sum -= arr[index];
}
int main()
{
    vector<int> arr;
    // arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    vector<int> ans;
    int index=0,sum=0;
    subset(arr,index,sum,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}