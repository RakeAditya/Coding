#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for(auto i: arr)
        cout<<i<<"\t";
    cout<<endl;
}
void reverse(vector<int> &arr)
{
    stack<int> st;
    for(auto i : arr)
        st.push(i);
    arr.clear();
    while(!st.empty())
    {
        arr.push_back(st.top());
        st.pop();
    }
}
int main()
{
    vector<int> arr {1,2,3,4,5};
    print(arr);
    cout<<"after reversing \n";
    reverse(arr);
    print(arr);
    return 0;
}