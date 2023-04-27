#include<bits/stdc++.h>
using namespace std;
void print(stack<int> &st)
{
    stack<int> s = st;
    while(!st.empty())
    {
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout<<endl;
}
void insAtBottom(stack<int> &st,int num)
{
    // agr stack empty h to end p aagae
    if(st.empty())
    {
        st.push(num);
        return;
    }

    // top ko store karaenge aur fr pop kara denge
    int x = st.top();
    st.pop();
// agae gae stacxk m hum
    insAtBottom(st,num);
    // wapas s push kr die element ko stack m hm
    st.push(x);
} 
void reverse(stack<int> &st)
{
    // end m pahonche to return kr die
    if(st.empty())
        return ;
        // top ko store karae
    int num = st.top();
    st.pop();

    // reverse kr die
    reverse(st);
    insAtBottom(st,num);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    print(st);
    cout<<"after reversing stack will be \n";
    // reverse(st);
    insAtBottom(st,6);
    cout<<st.size();
    // print(st.size());
    return 0;
}