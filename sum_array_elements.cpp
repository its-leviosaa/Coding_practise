#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements you want in your array.\n";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" elements in array.\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<"Sum of elements of created array is "<<sum;
    return 0;
}