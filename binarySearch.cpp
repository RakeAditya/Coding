#include<bits/stdc++.h>
using namespace std;
int BinSearch(vector<int> arr,int n, int key)
{
    int left =0;
    int rit = n-1;
    int mid ;
    while(left <= rit)
    {
        mid = (rit + left) /2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key )
            rit = mid-1;
        else
            left = mid +1;
    }
    return -1;
} 
int main()
{
    vector<int> arr;
    return 0;
}