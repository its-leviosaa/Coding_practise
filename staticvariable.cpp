#include<iostream>
using namespace std;

void fun()
{
    static int x=10;
    int x1=100;
    x++;
    x1++;
    cout<<x<<endl;
    cout<<x1<<endl;
}
int main()
{
    fun();//x1->101 and x->11
    fun();//x1->101 and x->12 since we declared x as static variable wo function end ke baad bhi waise hi reh gaya
          //toh next time increment mein wo 1 jyaada badha x1 se
    fun();//x1->101 and x->13 same reason as above
    return 0;
}