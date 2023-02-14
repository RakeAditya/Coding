#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int * *p1 = &p;
    cout<<"running\n";
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<p1<<endl;
    cout<<*p1;
    return 0;
}