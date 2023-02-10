#include<iostream>

// 1. array
#include<array>
// 2. vector 
#include<vector>
// 3. deque doubly ended queue and priority queue
#include<queue>
// 4. list 
#include<list>
// 5. map
#include<map>
using namespace std;

int main()
{
    // 1. array 
    array<int,5> name ={1,2,3,4};
    // algo
    cout<<name.size();
    cout<<endl<<name.at(2)<<endl;
    cout<<name.front()<<endl;
    cout<<name.back()<<endl;
    // 2. vector
    cout<<"  Vector  \n";
    vector<int> v;
    v.push_back(1);
    v.push_back(4);        
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    v.pop_back();
        for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl<<v.size();
    cout<<endl<<v.capacity()<<endl;
    v.clear();
    cout<<v.empty()<<endl;
    // 3. queue
    cout<<"   queue  \n";
    queue<int> q;
    q.push(1);
    q.push(4);
    q.push(2);
    q.push(5);
    cout<<q.front()<<endl ;
    cout<<q.back();
    cout<<"after popping \n";
    q.pop();
    cout<<q.front()<<endl ;
    cout<<q.back();
    cout<<"  \n priority queue\n";
    priority_queue<int> qu;
    qu.push(5);
    qu.push(9);
    qu.push(6);
    qu.push(1);
    qu.push(2);
    cout<<qu.top()<<endl;
    qu.pop();
    cout<<qu.top()<<endl;
    // min heap priority queue
    priority_queue <int , vector<int> ,greater<int>> mini;
    cout<<"min heap queue\n";
    mini.push(5);
    mini.push(2);
    mini.push(10);
    cout<<mini.top()<<endl;

    array<int,5> arr={1,8,2,15,6};
    priority_queue <int> max_qu;
    for(int i : arr)
        max_qu.push(i);
    cout<<max_qu.top();
    // 4. list
    cout<<"\n    list    \n";
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(5);
    li.push_back(4);
     li.push_back(1);  
    cout<<li.front()<<endl;
    cout<<li.size()<<endl ;
    for(int i: li)
    {
        cout<<i<<" ";
        
    }
    // 5.  map
    cout<<"   \n map \n";
    vector<int> kaam={5,2,2,4,1,5,5,5};
    map<int,int> fre;
    for(int i : kaam)
    {
        cout<<i<<" ";
        fre[i++];
    }
    map
    return 0;
}