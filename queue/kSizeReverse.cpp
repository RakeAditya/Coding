// select 1st k elments and reverse them 
#include<bits/stdc++.h>
using namespace std;

void printQ(queue<int> qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<"\t";
        qu.pop();
    }
}
queue<int> solve(queue<int> &qu, int k)
    {
        stack<int> st;
        // 1st k elments utha lo
        for(int i=0;i<k;i++)
            {
                st.push(qu.front());
                qu.pop();
            }
        // push kr do isko end m
        while(!st.empty())
        {
            qu.push(st.top());
            st.pop();
        }
        // n - k elements ko waise utha k daal do
        int t = qu.size() - k;
        while(t-->0)
        {
            int num = qu.front();
            qu.pop();
            qu.push(num);
        }
        return qu;
    }
int main()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    int k= 3;
    printQ(qu);
    cout<<"after eversing\n";
    solve(qu,k);
    printQ(qu);
    return 0;
}