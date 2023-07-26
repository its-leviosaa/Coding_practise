#include<iostream>
using namespace std;
int *fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<" = Address of pointer before function called."<<endl;
    return p;
}
int main()
{
    int *q=fun();
    cout<<q<<" = Address of pointer after function called."<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;//display karne ke liye elements ko ye likhna jaroori kyunki waha fun fncn mein hum display toh kiye nhi h
    }
}