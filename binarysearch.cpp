#include<iostream>
using namespace std;
void BinarySearch(int A[],int key,int n)
{
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    int start=0,end=n-1;
    int mid;
    mid=(start+end)/2;
    //another best way to find mid is mid=start+(end-start)/2
    //use this method to avoid overflow in case of large numbers
    while(start<=end)
    {
        if(A[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            return;
        }
        //exactly left mein move karna hai thus end=mid-1 and start will remain same
        else if(A[mid]>key)//meaning key lies in left half
        {
            end=mid-1;
        }
        //exactly right mein move karna hai thus start=mid+1 and end will remain same
        else//meaning key lies in right half
        {
            start=mid+1;
        }
        mid=(start+end)/2;//updating mid because start and end have changed
    }
    cout<<"Element not found"<<endl;
}
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};//must be a sorted array(even no. of elements)
    int key;
    int B[7]={20,54,65,78,98,100,120};//must be a sorted array(odd no. of elements)
    BinarySearch(A,key,10);//array name,element to be searched,size of array
    BinarySearch(B,key,7);
}