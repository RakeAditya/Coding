#include<bits/stdc++.h>
using namespace std;
 int sumOf(vector<int>&arr)
 {
    int n = arr.size();
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
        return sum;
 }
 void subSeq(vector<int>arr, int index,vector<int>line,int ans,int k)
 {
    if(index>=arr.size())
    {
        if(ans==k)
        {
            for(int i=0;i<line.size();i++)
                cout<<line[i]<<" ";
            cout<<endl;
        }
        return ;
    }

    // leave the rest
    subSeq(arr,index+1,line,ans,k);

    // include
    line.push_back(arr[index]);
    ans+=arr[index];
    subSeq(arr,index+1,line,ans,k);
    ans-=arr[index];
    line.pop_back();
 }
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(6);
    int k=6;
    int index=0;
    vector<int> line;
    int ans=0;
    // cout<<sumOf(arr);
    subSeq(arr,index,line,ans,k);
    return 0;
}