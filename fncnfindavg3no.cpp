#include<iostream>
using namespace std;
float avg3no(float a,float b,float c)
{
    float average;
    average=(a+b+c)/3;
    return average;
}
int main()
{
    float a,b,c,d;
    cout<<"Enter three numbers \n";
    cin>>a>>b>>c;
    d=avg3no(a,b,c);
    cout<<"Average of three numbers is "<<d;
    return 0;
}