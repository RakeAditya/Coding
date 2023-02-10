#include<bits/stdc++.h>
using namespace std;
 int firstEle(vector<int> &v,int t){
        int s=0;
        int i=-1;
        int e= v.size()-1;
        int m = s+ (e-s)/2;
        while(s<=e)
        {
            if(t == v[m])
                {
                    e=m;
                    i=m;
                }
            else if(t<v[m])
                e=m-1;
            else
                s=m+1;
            m = s+ (e-s)/2;
        }
        return i;
    }
 int main()
 {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    int k =firstEle(v,4);
    cout<<k;
    return 0;
 }