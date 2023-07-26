#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void CountNodes(Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    cout<<"Number of nodes in linked list are: "<<count<<endl;
}
int main()
{
    Node *head = NULL;
    Node *node1 = new Node();
    cout<<"Enter data for node 1: "<<endl;
    cin>>node1->data;
    node1->next = NULL;
    head = node1;
    Node *node2 = new Node();
    cout<<"Enter data for node 2: "<<endl;
    cin>>node2->data;
    node2->next = NULL;
    node1->next = node2;
    Node *node3 = new Node();
    cout<<"Enter data for node 3: "<<endl;
    cin>>node3->data;
    node3->next = NULL;
    node2->next = node3;
    CountNodes(head);
    return 0;
}