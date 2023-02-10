// A B C 
// B C D 
// C D E 
#include<iostream>
using namespace std;

    int main()
    {
        int n=3;
        cout<<"Enter"<<endl;
        cin>>n;
        char ch='A';
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<< char( ch + j);
            }
            ch++;
            cout<<endl;
        }
        return 0;
    }
