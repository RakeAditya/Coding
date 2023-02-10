// books of different pages are given where each index represent no of pages
// task :
// aloocate different no of pages book to student sucg that 
// -- book allocation is in contineoisu
// -- maximum on of books allocated to each student is to be minimum
#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    // to start student count which is to be less than m
    int stdCOunt = 1;
    // page sum to store sum of pages in a particular for use of partitioning
    int sumPages =0;

    for(int i=0; i<n ;i++)
    {
        if(sumPages + arr[i] <= mid)
        // agr sumof pages + current index page k sum mid s chota h to add kro aur aage badh jao
            sumPages += arr[i];
        else{
            // yani ek student ko dene ki possibility bdh gai to next student p jao
            stdCOunt++;
            // id student count is more than given value ---ya--- jo element enter kra rhe h wo mid s bda h to yani ki possible solution ni h to false reutrn kr jao
            if(stdCOunt > m || arr[i] > mid )
                return false;
            // agr student count chota h ya element inter kra skte h to bs page ko add kro aur fr iterate kro agle value k lie
            sumPages =0;

            sumPages = arr[i];
        }
    }
    return true;

}
int bookAllocate(int arr[],int n,int m)
{
    int s= 0;
    // search space start kie 0 se
    int sum=0;
    for(int i=0;i<n;i++)
        sum+= arr[i];
    int e =sum;
    // search space ki max value will be sum of all entries
    int mid = s + (e-s)/2;
    // ans to store the current values which might be an anser
    int ans =-1;
    while( s<=e )
    {
        if(isPossible(arr,n,m,mid))
        // is possible s hmko possible soultion wala case milega
        {
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+ (e-s)/2;   
    }
    return ans;
}
int main()
{
    int arr[4]={10,20,30,40};
    int n=4,m=2;
    // n no of books
    // m no of students
    int ans = bookAllocate(arr,n,m);
    cout<<ans;
    return 0;
}