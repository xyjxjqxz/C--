#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
class Node{
public:
        Node(int d):data(d){};
        Node* next;
        Node(){};
        int getData(){
    return data;
        }
private:
        int data;
};
class Stack{
public:
        void push(int item);
        int pop();
        bool isEmpty();
Stack(){
    head=new Node();
}
~Stack(){
        delete head;
}
private:
        Node* head;
};
void Stack::push(int item){
        Node* node=new Node(item);
        node->next=head->next;
        head->next=node;
}
int Stack::pop(){
        int n;
        Node *p=head->next;
        head->next=p->next;
        n=p->getData();
        cout<<"the data of stack which is pop£º"<<n<<endl;
        delete p;
        return 0;
}
bool Stack::isEmpty(){
        return(head==NULL);
}
int main(){
        Stack stack;
		cout<<"please input the data which is push"<<endl;
		int n;
		cin>>n;
        stack.push(n);
        stack.pop();
}
