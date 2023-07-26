#include<iostream>
using namespace std;
int Max_Of3no(int a,int b,int c)
{
    int max;
    if(a>b)
    {
        if(b>c)
        max=a;
        else
        {
            if(a>c)
            max=a;
            else
            max=c;
        }
    }
    else
    {
        if(a>c)
        max=b;
        else
        {
            if(b>c)
            max=b;
            else
            max=c;
        }
    }
    return max;
}
int main()
{
    int a,b,c,max;
    cout<<"Enter three numbers : \n";
    cin>>a>>b>>c;
    max=Max_Of3no(a,b,c);
    cout<<"Maximum of three numbers is "<<max;
    return 0;
}