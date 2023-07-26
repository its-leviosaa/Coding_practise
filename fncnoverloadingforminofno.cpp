#include<iostream>
using namespace std;
int Min(int x,int y)
{
    int min=0;
    if(x>y)
    min=y;
    else
    min=x;
    return min;
}
int Min(int x,int y,int z)
{
    int min=0;
    if(x<y && x<z)
    min=x;
    else if(y<z && y<x)
    min=y;
    else
    min=z;
    return min;
}
float Min(float x,float y,float z)
{
    float min=0;
    if(x<y && x<z)
    min=x;
    else if(y<z && y<x)
    min=y;
    else
    min=z;
    return min;
}
int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0,9.0)<<endl;//38 aur 39 mein ye difference h ki kabhi kabhi koi compiler f nhi daalne mein inko double consider karta
    cout<<Min(18.0f,9.0f)<<endl;
    return 0;
}