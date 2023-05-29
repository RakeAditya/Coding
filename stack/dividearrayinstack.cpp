#include<bits/stdc++.h>
using namespace std;
class NStack{
    private:
    // array jisme mere sare elements store krenge
    int *arr;
    // top m jitne mere stacks banenge sbke top elements k index store krenge
    int *top;
    // next represent krega next free space  --- ya --- last bhara index 
    int *next;
    int n,s;
    // size of array = n    no of stacks = s; 0indexed stacks use kr rhe h
    int freeSpace;
    // y point krega mere next free index p
    public:
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[n];
        top = new int[s];
        next = new int[n];

        // initialise top
        for(int i=0;i<s;i++)
            top[i] =-1;
        // initialise next with 
        // hr index p start m next index pda hoga taki agla free space represent ho
        for(int i=0;i<n;i++)
            next[i] = i+1;
        // last p aane p ab koi space ni khali h to yaha p -1 daal denge
            next[n-1] = -1;
        // freespace = next[0] ya start m 0 index p point krega
            freeSpace = 0;
        cout<<"Stack bana die h tmhre lie \n";
    }
    bool Push(int x,int m)
    // x = value jo ki push krenge array m aur m wale stack m daalenge m = m-1(0-indexed h)
    {
        // sbse phle check krenge ki kahi mera array bhara to ni h
        if(freeSpace == -1)
            return false;
        // khali jagah nikaale
        int index = freeSpace;
        // freeSpace ko update krenge next p
        freeSpace = next[index];
        // array m daal do
        arr[index] = x;
        // next[index] point krega kis stack m mera element h 
        next[index] = top[m-1];
        // top mera index ko store kkrega
        top[m-1] = index;
        // push kr die lement
        return true;
    }
    int pop(int m)
    // m wale stack s pop krenge hm
    {
        // sbse stack underflow check krenge
        if(top[m-1] == -1)
            return -1;
            // jo push m kie th eunhi sbko ulta chala do bs
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freeSpace;
        freeSpace = index;
        return arr[index];
    }
}; 
int main()
{
    NStack *N = new NStack(9,3);
    bool a = N->Push(5,2);
    if(a)
        cout<<"Element bhi push kr die tmhre lie \n";
    else
        cout<<"Element ni push kr die tmhre lie \n";
    int b = N->pop(1);
    if(b==-1)
        cout<<"Stack khali tha to kaha s nikaal de\n";
    else
       cout<<"Stack se nikaal die "<<b<<endl;
    return 0;
}