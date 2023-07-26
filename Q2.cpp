//While giving input 4 this is the output
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main()
{
    //no tricks in declaring i as 0 and j as 1 just doing it for fun
    int n;
    cin>>n;
    //int i=0;
    int i =1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}