#include<bits/stdc++.h>
using namespace std;
bool knows(vector<vector<int>>&mat,int a,int b)
{
    if(mat[a][b] == 1)
        return true;
    return false;
}
int celebrity(vector<vector<int>>&mat,int n)
{
    // stack bane k sbko push kra denge usme
    stack<int> st;
    for(int i=0;i<n;i++)
        st.push(i);
    // jbtk stack ki size 1 ni ho jati tb tk do nikalke k celebrity ko push kr denge
    while(st.size() > 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if(knows(mat,a,b))
            st.push(b);
        else
            st.push(a);
    }
    int candi = st.top();
    // ek potential candidate miul gaya
    // sari row m zerores count n ho aur column m 1 count n-1 ho;
    int rowCount = 0;
    for(int i=0;i<n;i++)
    {
        if(mat[candi][i] == 0)
            rowCount++;
    }
    bool rowCheck = false;
    if(rowCount == n)
        rowCheck = true;
    // ab column k lie
    int colCount = 0;
    for(int i=0;i<n;i++)
    {
        if(mat[i][candi] == 1)
            colCount++;
    }
    bool colCheck = false;
    if(colCount == n-1)
        colCheck = true;
    if(rowCheck && colCheck)
        return candi;
    return -1;
} 
int main()
{
    vector<vector<int>> mat = {
        {0,1,0},
        {0,0,0},
        {1,1,0}
    };
    int a = celebrity(mat,3);
    cout<<a;
    return 0;
}