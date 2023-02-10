// easiaest way to find the odd occurance of a certain digit
// n contains a squence of 2m +1 digits where each no occurs two time and one no occurs single time find that occurance of single 
// 1 3 2 3 2
// output 1
#include<iostream>
using namespace std;
int findOdd(int arr[],int n)
{
    int ans= 0;
    for (int i=0 ; i< n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[5] ={ 1, 3 ,2 ,1 ,2};
    cout<<findOdd(arr,5);
    return 0;
}