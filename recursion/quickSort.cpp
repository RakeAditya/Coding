#include<bits/stdc++.h>
using namespace std;
int partition (int arr[],int s,int e)
{
    // first ko pivot banae
    int pivot = arr[s];
    // kitne elemnt pivot s chote h count kie taki pivot ko utna index aagae badha ske
    int count=0;
    for(int i=s+1;i<=e;i++)
        {
            if(arr[i]<=pivot)
                count++;
        }
        // pivot k index s+ ocunt hoga aur swap maar die
    int pivotkaindex = s+ count;
    swap(arr[s],arr[pivotkaindex]);
    // left s se leke pivot index tk chalega aur right end s pivotindex tk aaega
    int left= s;
    int right =e;
    while(left<pivotkaindex && right >pivotkaindex)
    {
        // left ko chota mila to aage badhega jbtk bada element na mil jae
        while(arr[left]<pivot)
            left++;
            // right ko jbtk chota ni milega piche aata rhega
        while(arr[right]>pivot)
            right--;
            // jaha ek bada aur ek chota mile replace krdega dono ko
        if(left<pivotkaindex && right >pivotkaindex)
            swap(arr[left++],arr[right--]);
    }
    return pivotkaindex;
}
void quickSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int p = partition(arr,s,e);
    // left m quick sort
    quickSort(arr,s,p-1);
    // right m quicksort
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[8]={-1,-6,-6,7,-3,2,-9,-5};
    int n = 8;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}