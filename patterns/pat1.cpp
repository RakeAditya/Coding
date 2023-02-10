#include <iostream>
using namespace std;
// pattern to print
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 3


int main(){
    for(int i=0; i<4;i++){
        for(int j=1 ; j<5;j++)
        cout<<j<<"\t";
        cout<<endl;
    }
return 0;
}