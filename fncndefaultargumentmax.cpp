#include<iostream>
using namespace std;
int Max(int x,int y,int z=0)
{
    return x>y && x>z ? x : y>z ? y:z;
}
int Max_using_diff_defaultargument(int a=0,int b=0,int c=0)//->this one funcn will work for 4 different type of arguments
{
    return a>b && a>c ? a : b>c ? b:c;
}
int main()
{
    cout<<Max(10,15)<<endl;
    cout<<Max(100,105,15)<<endl;
    cout<<Max_using_diff_defaultargument()<<endl;//->zero argument ->not passing anything so zero is the greatest number
    cout<<Max_using_diff_defaultargument(100)<<endl;
    cout<<Max_using_diff_defaultargument(100,105)<<endl;
    cout<<Max_using_diff_defaultargument(100,159,150)<<endl;
    return 0;
}
//int Max(int x,int y=0,int z=0,int k) -->default argument right to left zero karna h koi bhi middle mein nhi
//int Max(int x,int y=0,int z=0) -->acceptable
