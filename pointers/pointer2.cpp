// play with array and functions using pointer
#include<bits/stdc++.h>
using namespace std;
void fun(int *arr)
{
    cout<<"Inside the fucntion \n";
    cout<<arr<<endl;
    cout<<*arr++<<endl;
    cout<<arr++<<endl;
    // ek function k andr alg ptr change ho rha h to wo sirf andr hi hoga lekin value dono jagah ho jaegi
}

int main()
{
    // integer array
    int arr[6] ={10,20,30,40,50,60};
    // array k first element can be accessed via arr only
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    // value
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<1[arr]<<endl;
    cout<<"last element k address = "<<(arr+5)<<endl;
    // character array
    char a[] ="qazwsx";
    // address
    cout<<&a<<endl;
    //  whole array de dega
    cout<<a<<endl;
    // 1st element k value de dega
    cout<<*a<<endl;
    int str[10] ={10,20,30,40,50,60,70,80,90,100};
    cout<<"Before function call\n";
    cout<<str<<endl<<*str<<endl;
    fun(str);
    cout<<"after the function call\n";
    cout<<arr<<endl;
    cout<<*arr<<endl;
    // function calling
    return 0;
}