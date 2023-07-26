#include<iostream>
#include<stack>//this is the library for stack
using namespace std;
int main()
{
    //creating a stack of type int
    stack<int> s;//without declaring stack library this will give error
    //pushing elements in stack
    s.push(10);
    s.push(20);
    cout<<"Top element of stack is: "<<s.top()<<endl;
    s.push(30);
    s.push(40);
    //printing the top element of stack after all elements are pushed
    cout<<"Top element of stack is: "<<s.top()<<endl;
    //printing the size of stack
    cout<<"Size of stack is: "<<s.size()<<endl;
    //popping elements from stack
    s.pop();
    cout<<"Top element of stack is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of stack is: "<<s.top()<<endl;
    //printing the size of stack
    cout<<"Size of stack is: "<<s.size()<<endl;
    s.empty()?cout<<"Stack is empty.":cout<<"Stack is not empty.";
}