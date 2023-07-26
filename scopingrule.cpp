#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    {
        int x=100;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    //printing initial global variable
    cout<<::x<<endl;
    return 0;
}