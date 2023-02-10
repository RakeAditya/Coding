//    1   
//   121 
//  12321
// 1234321

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        // 1st space
        for(int j=0;j<=n-i;j++)
        cout<<"-";
        // inc num
        for(int j=1; j<= i ;j++)
        cout<<j;
        // dec num
        for(int j=i-1; j>0; j--)
        cout<<j;
        // lst spaces
        for(int j=0 ; j<= n-i;j++)
        cout<<"-";
        cout<<endl;
    }
    return 0;
}