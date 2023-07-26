#include<iostream>
using namespace std;

//creating node
struct Node{
    int data;
    Node* next;
}*first=NULL;

//creating linked list
void createLinkedList(int A[],int n)
{
    int i;
    Node *t,*last;
    first=new Node();
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node();
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

//displaying linked list
void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

//counting nodes of linked list
int count(Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

//sum of all elements of linked list
int sum(Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

//recursive sum function
int recursiveSum(Node *p)
{
    if(p==NULL)
        return 0;
    else
        return recursiveSum(p->next)+p->data;
}

//finding maximum element of linked list
int max(Node *p)
{
    //int max=0;
    int max=INT_MIN; //Minimum value for a variable of type int .
    while(p!=NULL)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}
//recursive max function
int recursiveMax(Node *p)
{
    int x=0;
    if(p==0)
        return INT_MIN;
    x=recursiveMax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}
//new recursive max function
int newRecursiveMax(Node *p)
{
    int x=0;
    if(p==0)
        return INT_MIN;
    x=newRecursiveMax(p->next);
    return x>p->data?x:p->data;
}
int main()
{
    int A[]={3,5,7,10,15};
    createLinkedList(A,5);
    display(first);
    cout<<endl;
    cout<<"Number of nodes i.e. length of linked list is: "<<count(first)<<endl;
    cout<<"Sum of all elements of linked list is: "<<sum(first)<<endl;
    cout<<"Sum of all elements of linked list using recursive function is: "<<recursiveSum(first)<<endl;
    cout<<"Maximum element of linked list is: "<<max(first)<<endl;
    return 0;
}