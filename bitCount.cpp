#include <iostream>
using namespace std;
int bitFind(int n)
{
    int bit,ans=0,i=1;
    while(n!= 0)
    {
        bit = (n&1);
        ans = ans + bit*i;
        n=n>>1;
        i=i*10;
    }
    return ans;
}
int countBit(int n){
    int sum=0,digit;
    for(n;n>0;n= n/10)
    {
        digit = n % 10;    
        sum= sum + digit;
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    int bin = bitFind(n);
    cout<<bin<<endl;
    cout<<countBit(bin);
    return 0;
}