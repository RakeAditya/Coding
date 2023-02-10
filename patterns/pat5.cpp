#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        // inc num
        for(int j=1; j<=n-i+1; j++)
        cout<<j;
        // **
        for(int j=1; j<=i-1; j++)
        cout<<"**";
        // dec num
        for(int j=n-i+1; j>0; j--)
        cout<<j;
        cout<<endl;
    }
    return 0;
}