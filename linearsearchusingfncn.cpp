#include<iostream>
using namespace std;

//agar yahi sirf parameter denge toh kabhi nahi aayega sahi output because
//mere main function ko pata h array kya h
//but mere Lsearch function ko nhi pata h array kya h
//Lsearch function bass empty array le raha h sirf key parameter lene pr
//toh iss function ke parameter mein abb key parameter ke alawa array ko bhi parameter lo taaki wo bataye mere function ko array kya h
//aur array ka size bhi lo as a parameter taaki pata chale kitna dur tak loop chalega
//this program is not correct see part 2 for correct version
int Lsearch(int key)
{
    int i,A[100];
    for(i=0;i<100;i++)
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
    cout<<"Your required array is p = { ";
    for(int i=0;i<size;i++)
    {
        cout<<P[i]<<" ";
    }
   cout<<"}\n";
   cout<<"Size of your array is "<<sizeof(P)<<endl;
   cout<<"Enter element you want to search in given array. \n";
   cin>>key;
   Lsearch(key);
   return 0;
}