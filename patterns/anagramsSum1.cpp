// find lexographically first permutation for string where sum of adjecent elements is at least greater than k



#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;
}
void solve(vector<int> &v,int n ,int k)
{
    int i=1;
    int j=i+1;
    while(i<=n)
    {
        if((v[i] + v[i-1]) < k)
            swap(v[i],v[j++]);
        else
            i++;j=i+1;
    }
}
int main()
{
    int n =6;
    int k =5;
    vector<int> v;
    for(int i=1 ; i<=n;i++)
        v.push_back(i);
        
    int i=1;
    int j=i+1;
    while(i<=n)
    {
        if((v[i] + v[i-1]) < k)
            {
                swap(v[i],v[j]);
                j++;
            }
        else
        {
            i++;
            j=i;
        }
            
    }
    print(v);
    return 0;
}