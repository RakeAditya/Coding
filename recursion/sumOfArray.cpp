#include<bits/stdc++.h>
using namespace std;
int sumOfarr(int *arr,int n)
{
    if(n == 0)
        return 0;
    return arr[0] + sumOfarr(arr+1,n-1);
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int k =sumOfarr(arr,6);
     cout<<k;
    return 0;
}