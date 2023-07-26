#include<iostream>
using namespace std;
//Now we are going to write a function to calculate factorial of a number
//n!=n*(n-1)*(n-2)*...*1
//Function Signature
int factorial(int n)
{
    //Function Body
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
//nCr = n!/(n-r)!r!
//Function Signature
int nCr(int n,int r)
{
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;
    //calling nCr function
    cout<<"nCr is : "<<nCr(n,r)<<endl;
    //calling factorial function
    cout<<"Factorial of "<<n<<" is : "<<factorial(n)<<endl;
    cout<<"Factorial of "<<r<<" is : "<<factorial(r)<<endl;
    cout<<"Factorial of "<<n-r<<" is : "<<factorial(n-r)<<endl;
    return 0;
}