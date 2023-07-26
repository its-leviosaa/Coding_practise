//While giving input 4 this is the output
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    //int j=1;//column 1 se start
    int count =1;
    while(i<=n)
    {
        int j=1;//column 1 se start
        while(j<=n)//3 column should be present
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
}