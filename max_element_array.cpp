//The idea is to traverse over the array recursively and find the maximum element. 
#include<iostream>
using namespace std;
  
int largest(int arr[], int n, int i)
{
    // last index
    // return the element
    if (i == n - 1) {
        return arr[i];
    }
  
    // find the maximum from rest of the array
    int recMax = largest(arr, n, i + 1);
  
    // compare with i-th element and return
    return max(recMax, arr[i]);
}
  
// Driver Code
int main()
{
    int arr[] = { 10, 324, 45, 90, 98 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest in given array is "
         << largest(arr, n, 0);
    return 0;
}