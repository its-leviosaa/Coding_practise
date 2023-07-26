#include<iostream>
using namespace std;
//global variable
int g=5;
void fun()
{
    int a=10;
    a++;
    g++;
    cout<<"a value is "<<a<<" and g value is "<<g<<endl;
}
//pehle main function se program start hota hai
int main()
{
    cout<<g<<endl; //-->original value aayega
    // a++;->it is showing error that variable is not declared
    g++;
    fun();
    cout<<g;
    return 0;
}