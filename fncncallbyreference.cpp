#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
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
    cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y;//-> change will happen through this
    return 0;
}
//address of a and b in both funcytion will come same it means that swap function is not creating any other variables