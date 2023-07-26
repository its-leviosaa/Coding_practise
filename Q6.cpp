//While giving input 4 this is the output
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;//column 1 se start
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}