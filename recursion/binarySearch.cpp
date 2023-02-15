#include<bits/stdc++.h>
using namespace std;
int binSearch(int *arr,int s,int e,int k)
{
    if(s > e)
        return -1;
    int m = s + (e-s)/2;
    if(arr[m] == k)
        return m;
    else if(arr[m]>k)
        binSearch(arr,s,m-1,k);
    else    
        binSearch(arr,m+1,e,k);
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int k= 7;
    cout<<binSearch(arr,0,5,k);
    return 0;
}