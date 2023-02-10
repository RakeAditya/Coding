// array of n stalls with each index telling their postion on x coordinate
// m cows are to be place with intermediate distance to be maximum

#include <iostream>
using namespace std;
int isPossible(int arr[],int n,int m ,int mid)
{
    int cowCount =1;
    int lastpos= arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] - lastpos >= mid)
        {
            cowCount++;
            if(cowCount == m)
                return true;
            lastpos =arr[i];
        }
    }
    return false;
}
int cowAllocate(int arr[],int n, int m)
{
    // search space banenge 0 to max of elemnt tk 
    int s=0;
    int maxi = -1;
    for(int i=0;i<n;i++)
        maxi = max(maxi,arr[i]);
    int e = maxi;    
    int mid = s +(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            s = mid +1;
        }
        else
            e = mid-1;
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,4,6};
    int n=5,m=2;
    int ans =cowAllocate(arr,n,m);
    cout<<ans;
    return 0;
}