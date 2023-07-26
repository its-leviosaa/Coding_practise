//While giving input 4 this is the output
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
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
        while(j<=n)//3 column should be present
        {
            cout<<n-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}