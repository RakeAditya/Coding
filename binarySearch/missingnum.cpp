#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v)
{
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int checkmiss(vector<int> &v)
{
    sort(v.begin(),v.end());
    // print(v);
    int a= v.front();
    int b= v.back();
    // cout<<a<< " "<<b;
    vector<int> ans;
    for(int i=a;i<=b;i++)
        ans.push_back(i);
    // print(ans);
    int k=0;
    for(int i=0,j=0;i<v.size();i++,j++)
    {
        if( v[i] != ans[j])
        {
            k=ans[j];
            if(k>0)
                return k;
            else
                ++j;
        }
    }
    return b+1 ;
}

int main()
{   
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(-2);
    print(arr);
    auto i =find(arr.begin(),arr.end(),1);
    int index = i - arr.begin();
    cout<<index;
    cout<<"\n new vector is\n";
    int m =*max_element(arr.begin(),arr.end());
    cout<<m;
    // checkmiss(arr);
    return 0;
}
