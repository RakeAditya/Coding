#include<bits/stdc++.h>
using namespace std;
bool linSearch(int *arr,int n,int k)
{
    if( n==0)
    return 0;

    if(arr[0] == k)
        return 1;
    linSearch(arr+1,n-1,k); 
}
int main()
{
    int arr[6] = {5,3,4,6,2,1};
    int k =7;
    cout<<linSearch(arr,6,k);
    return 0;
}