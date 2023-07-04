#include<bits/stdc++.h>
using namespace std;
bool waySafe(int x,int y,int n,vector<vector<int>> mapp,vector<vector<int>> m)
{
    if((x>=0 && x<n) &&(y>=0 && y<n) && mapp[x][y]==0 && m[x][y]==1)
        return true;
    return false;
}
void rat(vector<vector<int>> m,int n,vector<vector<int>> mapp,string way,int x, int y,vector<string> &ans)
{
    if(x==n-1 && y==n-1 && m[x][y]==1)
    {
        ans.push_back(way);
        return;
    }
    // visit kr lie 1 node ko
    mapp[x][y] = 1;
    // move down
    int srcx = x+1;
    int srcy = y;
    if(waySafe(srcx,srcy,n,mapp,m))
    {
        way.push_back('D');
        rat(m,n,mapp,way,srcx,srcy,ans);
        way.pop_back();
    }
    // move right
    srcx = x;
    srcy = y+1;
    if(waySafe(srcx,srcy,n,mapp,m))
    {
        way.push_back('R');
        rat(m,n,mapp,way,srcx,srcy,ans);
        way.pop_back();
    }
    
    // move up
    srcx = x-1;
    srcy = y;
    if(waySafe(srcx,srcy,n,mapp,m))
    {
        way.push_back('U');
        rat(m,n,mapp,way,srcx,srcy,ans);
        way.pop_back();
    }
    // move left
    srcx = x;
    srcy = y-1;
    if(waySafe(srcx,srcy,n,mapp,m))
    {
        way.push_back('L');
        rat(m,n,mapp,way,srcx,srcy,ans);
        way.pop_back();
    }
    mapp[x][y] =0;
    // backtrack kr lie node ko 0 s
}

void print(vector<vector<int>> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
} 
int main()
{
    vector<vector<int>> m;
    int n = m.size();
    m.push_back({1,0,0,0});
    m.push_back({1,1,0,1});
    m.push_back({1,1,0,0});
    m.push_back({0,1,1,1});
    // print(m,n);
    // question suru
    vector<vector<int>> mapp (4,vector<int> (4,0));
    // print(mapp,4);
    vector<string> ans;
    string way="";
    int x =0;
    int y =0;
    rat(m,n,mapp,way,x,y,ans);
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
    return 0;
}