#include<iostream>
using namespace std;
int mPOWERn(int m, int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*m;
    }
    return result;
}
int main()
{
    int m,n,final;
    cout<<"Enter any number : \n";
    cin>>m;
    cout<<"Enter what power you want to do of "<<m<<endl;
    cin>>n;
    final=mPOWERn(m,n);
    cout<<m<<" to the power "<<n<<" is "<<final;
    return 0;
}