//int *arr; declares a variable named arr that is a pointer to an integer
//By declaring int *arr;, you are reserving memory for a pointer variable that can point to an integer or an array of integers.
//However, it's important to note that at this point, arr is uninitialized,
//meaning it does not currently point to any specific memory location.

// when working with class objects, 
//the this pointer is a special pointer that points to the current instance of the class
//So, this->size = size; assigns the value of the local variable size to the member variable size of the current object instance. 
//It's a way to differentiate between the local variable size and the member variable size.

//local variable is the variable declared inside a function
//member variable is the variable declared inside a class

#include<iostream>
using namespace std;
class Stack{
    //properties of stack
    public:
        int top;
        int *arr;
        int size;//for array
    //methods/behaviour of stack
    //creating a parameterized constructor
    Stack(int size){
        top=-1;
        this->size=size;//this keyword is used to differentiate between class property and constructor parameter
        arr=new int[size];//dynamically allocating memory to array
    }
    //now we are defining methods of stack
    void push(int data){
        // if(top-size>1){
        //     //this means ki atleast one element can be inserted
        // }
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        //atleast one element should be there to pop
        //another method of pop
        // if(top>=0){
        //     top--;
        // } ->simple pop
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){//array ka top element dekhna chaahta hu
        if(top==-1){//empty stack
            cout<<"Stack underflow condition"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }    
};
int main()
{
    //creating a stack of size 5
    Stack st(5);
    //pushing elements in stack
    st.push(10);
    st.push(20);
    st.push(22);
    st.push(30);
    //cout<<"Top element is"<<st.top()<<endl; ->this will give error as for st we have declared peek function not top
    cout<<"Top element of stack is"<<st.peek()<<endl;
    st.pop();
    cout<<"Top element of stack is"<<st.peek()<<endl;
    cout<<"Is stack empty? "<<st.isEmpty()<<endl;//we'll get 0 which means false
    st.pop();
    st.pop();
    cout<<"Top element of stack is"<<st.peek()<<endl;
    st.pop();
    cout<<"Is stack empty? "<<st.isEmpty()<<endl;
    cout<<"Top element of stack is "<<st.peek()<<endl;
}