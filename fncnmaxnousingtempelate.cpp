#include<iostream>
using namespace std;
template<class T> //instead of writing T we can use any name
T Max(T x,T y)
{
    T max=0;
    if(x>y)
    max=x;
    else
    max=y;
    return max;
    //another method to write
    //instead of writing all above line inside T function
    //just write this one line
    //return x>y?x:y -->using conditional statement
}
int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f)<<endl;
    //cout<<Max(12.5f,17.3);    ->>> //here the error is showing that argument list doesn't match the tempelate function
    //because 12.5f is float but 17.3 is double by default
    return 0;
}