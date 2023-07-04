#include<bits/stdc++.h>
using namespace std;
void print(queue<int> qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<"\t";
        qu.pop();
    }
    cout<<endl;
}
void rev(queue<int> &qu)
{
    stack<int> st;
    while(!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
}
int main()
{
    queue<int> qu;
    qu.push(5);
    qu.push(6);
    qu.push(7);
    qu.push(8);
    qu.push(9);
    print(qu);
    cout<<"After reversing we get\n";
    rev(qu);
    print(qu);
    return 0;
}