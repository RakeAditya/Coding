#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v)
{
    int n= v.size();
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}

 void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size(); j++)
        {
            // console
            if(nums[j] != -1)
                swap(nums[i++],nums[j]);
        }
    }
void check(vector<int>& v)
{
    int n= v.size();
    for(int i=0;i<n-1;i++)
    {
        if(v[i] == v[i+1])
            v[i] = -1;
        if( v[i] == -1)
            continue;
    }
    print(v);
    cout<<"calling the move function\n";
    moveZeroes(v);
    print(v);
    while(v[n-1] == -1)
     {
        v.pop_back();
        n--;
     }
    cout<<"after pooping \n";
    print(v);
}

int main()
{
    vector<int> v;
    v.push_back(-1);
    v.push_back(-1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    print(v);
    cout<<"calling the chechk \n";
    // moveZeroes(v);
    check(v);
    print(v);
return 0;
}