#include<bits/stdc++.h>
using namespace std;
 int powerOf(int n,int m)
 {
    if(m==0)
        return 1;
    return n * powerOf(n,m-1);
 }
int main()
{
    int n =15;
    int m = 2;
    cout<<powerOf(n,m);
    return 0;
}