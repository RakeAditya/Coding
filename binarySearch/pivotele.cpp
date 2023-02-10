#include<iostream>
using namespace std;
int pivotElement(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int m = s+ (e-s)/2;
    while( s<e )
    {
        if (arr[m] >= arr[0])
            s = m+ 1;
        else    
            e = m;
        m = s + (e-s)/2;
    }
    return s;
}
int binSearch(int arr[], int start, int end , int key)
{
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (key == arr[mid])
            return mid;
        else if( key> arr[mid])
            start = mid+1;
        else
            end = mid -1;
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {1,0,1,1,1};
    int pivot = pivotElement(arr,5);
    cout<<"Pivot element is at "<<pivot<<endl;
    int key= 2,val;
    if(key >= arr[pivot] && key<= arr[4])
        val = binSearch(arr,pivot,4,key);
    else
        val = binSearch(arr,0,pivot-1,key);
    cout<<"search value is "<<val<<endl;   
 
    return 0;
}