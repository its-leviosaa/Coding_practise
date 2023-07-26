#include<iostream>
using namespace std;
//the first whole line is called as prototype of a function and header of function or signature of function
int Add_2no(int a,int b)//we can take any datatype for a and b
{
    //body is called implementation of function
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int x,y,c;
    cout<<"Enter two numbers. \n";
    cin>>x>>y;
    c=Add_2no(x,y);
    cout<<"Sum is "<<c;
}