#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a =10;
    // value
    cout<<a<<endl;
    // address
    cout<<&a<<endl;
    // hamesha ptr ko null s initialsise kr denge agr koi value starting m ni die h to
    int *ptr=0;
    ptr = &a;
    cout<<"After ptr creation\n";
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    // &a s address dikhega 
    // * &a mtlb us address p jo  value h vo w=milegi
    cout<<*&a<<endl;
    cout<<"Print sizes\n";
    cout<<"size of a is "<<sizeof(a)<<endl;
    cout<<"size of ptr is "<<sizeof(ptr)<<endl; 
    cout<<"size of *ptr is "<<sizeof(*ptr)<<endl;

    // updating pointer
    int *q = ptr + 1;
    // pointer incremenet hamesha size X datatype ki value s hoga 
    cout<<q<<endl;
    cout<<*q<<endl;
    return 0;
}