#include<iostream>
using namespace std;
int main()
{
    string s,new_s;
    cout<<"Enter a string : \n";
    cin>>s;
    for(int i=0,j=0;i<s.length();i++,j++)
    {
        new_s[j]=s[i];
        if(s[i]='@')
        {
            break;
        }
    }
    cout<<new_s<<endl;
    return 0;
}