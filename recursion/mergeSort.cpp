#include<bits/stdc++.h>
using namespace std;
 
void merge(int *arr,int s,int e)
{
    int m = s + (e-s)/2;
    
    
    // dono array k size de die
    int len1 = m - s + 1;
    int len2 = e- m;


    // array define kr die

    int *first = new int[len1];
    int *second = new int[len2];
    // copy krenge element
    
    int mainEle = s;


//  first array k elment copy kie
    for(int i=0;i<len1;i++)
        first[i]=arr[mainEle++];

    mainEle = m+1;

    for(int i=0;i<len2;i++)
        second[i]=arr[mainEle++];
    // merge sorted array
    mainEle = s;
    int ind1=0;
    int ind2 = 0;
    while(ind1<len1 && ind2<len2)
    {
        if(first[ind1] < second[ind2])
            arr[mainEle++] = first[ind1++];
        else
            arr[mainEle++] = second[ind2++];
    }
    while(ind1 <len1)
        arr[mainEle++] = first[ind1++];
        
    while(ind2 <len2)
        arr[mainEle++] = second[ind2++];
    delete []first;
    delete []second;
}

void mergeSort(int *arr,int s,int e)
{

    if(s>=e)
        return ;
    int m = s + (e-s)/2;
    // left array
    mergeSort(arr,s,m);
    //right array
    mergeSort(arr,m+1,e);
    // merge kr die dono ko
    merge(arr,s,e);
}

int main()
{
    int arr[6]={5,9,2,6,3,1};
    int n=6;
    mergeSort(arr,0,n-1);    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}