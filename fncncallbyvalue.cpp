#include<iostream>
using namespace std;
void swap(int a,int b)
{
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int x=10,y=7;
    swap(x,y);
    cout<<x<<" "<<y;//-> no change will happen through this
}