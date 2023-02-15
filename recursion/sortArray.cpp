#include<bits/stdc++.h>
using namespace std;
void sortArr(int *arr,int n)
{
    if(n <= 1)
        return ;
    if(arr[0] > arr[1])
        swap(arr[0],arr[1]);
    sortArr(arr+1,n-1);
}
int main()
{
    int arr[6] = {5,3,6,1,2,4};
    sortArr(arr,6);
    for(int i=0;i<6;i++)
        cout<<arr[i];
    return 0;
}