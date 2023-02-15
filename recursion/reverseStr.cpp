#include<bits/stdc++.h>
using namespace std;
void revStr(char *str,int i,int j)
{
    if (i>j)
        return ;
    swap(str[i++],str[j--]);
    revStr(str,i,j);
}
int main()
{
    char Str[] = "hello";
    // int n = Str.size();
    revStr(Str,0,5);
    cout<<Str<<endl;
    return 0;
}