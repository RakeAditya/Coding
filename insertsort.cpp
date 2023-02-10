// insertion sort k code

#include<iostream>
using namespace std;
void insertSort(int arr[],int n)
{
    for(int i=1; i<n ;i++)
    {
        // +1 eleement ko daal die ele m isse compare krenge
        int ele = arr[i];
        // j jo h i se 1 chote s leke 0 tk chalega aur compare krega
        int j =i-1;
        for(j; j>=0 ; j--)
        {
            // agr jth  element jo ki ele s chota h to ele ko hmko piche le aana h iske lie j+1 ko j kie tb tk jb tk shi position hmko i ki na mil jae
            if(arr[j] > ele)
                {
                    arr[j+1] = arr[j];
                }
            else
            // agr ele s chota milta h to iske piche bhi sb chote honge to yhi p ruk k bahar aajaenge 
                break;
        }
        // array k bahar aane p jki value correct position s ek kam h islie usko ek aage badha denge bs aur eaha p correct position hmko ele ki mil jaegi
        arr[j+1] = ele;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[7]={10,1,4,7,8,2,6};
    int n=7;
    insertSort(arr,n);
    return 0;
}