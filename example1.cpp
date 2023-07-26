//We are going to write our first function
#include<iostream>
using namespace std;
int power(int m,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*m;
    }
    return ans;
}
int main()
{
    int m,n;
    cout<<"Enter the value of m and n : ";
    cin>>m>>n;
    cout<<m<<" to the power "<<n<<" is : "<<power(m,n)<<endl;
    return 0;
}