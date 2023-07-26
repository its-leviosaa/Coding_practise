////While giving input 4 this is the output
/*      * * * *
        * * * *
        * * * *
        * * * *          */
#include<iostream>
using namespace std;
int main()
{
    //kid way of approach

    // int i=1;
    // while(i<=4)
    // {
    //     cout<<"* * * *"<<endl;
    //     i++;
    // }

    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}