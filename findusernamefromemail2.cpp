#include<iostream>
using namespace std;
int main()
{
    string email;
    int valid=0;
    cout<<"Enter an email address : \n";
    cin>>email;
    //finding index of @
    int i=email.find('@');
    //printing substringtill letter @ from using string function
    string user_name = email.substr(0,i);
    cout<<"Username is "<<user_name<<endl;
    //checking validity of username
    for (int i = 0; i < user_name.length(); i++)
    {
        int d = (int)user_name[i];
        if((d>=65 && d<=90) || (d>=97 && d<=122) || (d==95) || (d>=48 && d<=57))
        {
            valid=1;
        }
        else
        {
            valid=0;
            break;
            //ye isiliye ki agar kabhi valid=0 hua toh wahi pr loop break ho jaaye
            //warna aisa hota ki loop dobaara chalta valid=0 se phir valid=1 ho jaata
            //phir unacceptable username ko bhi correct print kar deta compiler isiliye we use break
            //valid=0 statement isiliye mandatory h kyunki loop ke start hote hi valid=1 ho jaayega
            //agar wo condition satisfy karega toh isiliye else statement needed h
        }
    }
    if(valid==1)
    {
        cout<<user_name<<" IS A VALID USERNAME";
    }
    else
    cout<<user_name<<" IS NOT A VALID USERNAME";
    return 0;
}