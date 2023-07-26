#include<iostream>
using namespace std;
int sum(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
    //both having different number of arguments but only one function is used
    cout<<sum(10,5)<<endl;
    cout<<sum(10,5,5)<<endl;
    return 0;
}