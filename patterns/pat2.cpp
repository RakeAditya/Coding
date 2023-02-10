#include<iostream>
using namespace std;

// 1
// 2 3 
// 3 4  5
// 4 5 6 7

int main()
{
    int n;
    cout<<"Input"<<endl;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        for(int j=0; j<i; j++)
        cout<<j+i<<"\t";
        cout<<endl;
    }
    return 0;
}