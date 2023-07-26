#include<iostream>
using namespace std;

int Lsearch(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Searched key matched array element and it's value was "<<key<<endl;
            cout<<"It is found at "<<i<<"th index";
        }
    }
    return 0;
}
int main()
{
    int size,key;
    cout<<"Enter number of elements : \n";
    cin>>size;
    int P[size];
    for(int i = 0; i<size ; i++)
    {
        cout<<"Enter "<<i<<"th index element : \n";
        cin>>P[i];
    }
    cout<<"Your required array is P = { ";
    for(int i=0;i<size;i++)
    {
        cout<<P[i]<<" ";
    }
   cout<<"}\n";
   cout<<"Size of your array is "<<sizeof(P)<<endl;
   cout<<"Enter element you want to search in given array. \n";
   cin>>key;
   Lsearch(P,size,key);
   return 0;
}