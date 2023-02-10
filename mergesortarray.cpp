#include<iostream>
#include<vector>
using namespace std;

void mergeSort(vector<int> nums1, int m, vector<int> nums2, int n){
    int i=0,j=0,k=0;
    int x= m-n;
    vector<int> ans;
    while(i<x && j<n)
    {
        if(nums1[i] == 0)
        break;
        else{
            if(nums1[i] < nums2[j])
            {
                ans[k] = nums1[i];
                i++;
                k++;
            }
            else{
                ans[k]= nums2[j];
                j++;
                k++;
            }
        }
    }
    // copy the rest
    while(i<x)
    {
        ans[k] = nums1[i];
        i++;
        k++;
    }
    while(j<n)
    {
        ans[k] = nums2[j];
        j++;
        k++;
    }
    for(int z=0;z<m;z++)
    {
        nums1[z] = ans[z];
    }
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    arr2.push_back(2);
    arr2.push_back(5);
    arr2.push_back(6);
    for(int i=0;i<arr1.size();i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<arr2.size();i++)
        cout<<arr2[i]<<" ";
        cout<<endl; 
    mergeSort(arr1,6,arr2,3);
    for(int i=0;i<arr1.size();i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    
}