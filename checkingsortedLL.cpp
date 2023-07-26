//Now using the insert function I'll try to create an entire linked list
#include<iostream>
using namespace std;
// creating a node
struct Node
{
    int data;
    struct Node *next;
}*first = NULL;
//struct Node *first = NULL; // global pointer->aise bhi likh sakte hai

//counting nodes in linked list
int count(Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    //cout<<"Length of linked list is: "<<count<<endl;
    return count;
}
//Displaying elements of linked list
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//p is a pointer to first node, then at what position we want to insert and what element we want to insert
void insert(Node *p, int index, int x)
{
    //for inserting a node we need to create a new node
    Node *t;
    int i;
    //checking if index is valid or not
    if(index<0 || index>count(p))//in count function we are passing p which is pointer to the first node
        return;
    //if index is valid then we can insert a new node
    t = new Node;
    t->data = x;//after creating a new node fill data in it
    //if index is 0 then we need to insert a new node before first node
    //INSERT AT BEGINNING
    if(index == 0)
    {
        t->next = first;
        first = t;
    }
    //if index is greater than 0 then we need to insert a new node at a given index
    else
    {
        for(i=0;i<index-1;i++)
            p = p->next;//for traversing till the index-1 position
        //making necessary links to insert a new node
        t->next = p->next;
        p->next = t;
    }
}
bool isSorted(Node *p)
{
    int x = INT_MIN;
    while(p!=NULL)
    {
        if(p->data<x)
            return false;
        //below statement is else part of if statement    
        x = p->data;//copying data of current node to x and then traversing to next node
        p = p->next;
    }
    return true;
}
int main()
{
    //Let's directly use insert function for inserting various nodes
    //Since there is nothing in the linked list so very first node will be inserted at index 0
    insert(first, 0, 15);
    display(first);
    //initially we can't insert at any other index because LL is empty
    cout<<endl;
    //Now inserting at index 1
    insert(first, 1, 20);
    display(first);
    cout<<endl;
    isSorted(first)?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    //Now inserting at index 2
    insert(first, 2, 25);
    display(first);
    cout<<endl;
    //now we can insert again at 0
    insert(first, 0, 10);
    display(first);
    cout<<endl;
    insert(first, 0, 5);
    display(first);
    cout<<endl;
    isSorted(first)?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    insert(first, 3, 7);
    display(first);
    cout<<endl;
    isSorted(first)?cout<<"Sorted"<<endl:cout<<"Not Sorted"<<endl;
    return 0;
}