#include<iostream>
using namespace std;
#define size 10
int top=-1;
int stack[size];
void push()
{
    int item;
    if (top==size-1)
    {
        cout<<"stack is full";
        return ;
    }
    cout<<"enter element to be inserted";
    cin>>item;
    top++;
    stack[top]=item;
    cout<<"\n element inserted"<<"\n";
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is empty";
        return ;
    }
    cout<<"\n deleted element is :"<<stack[top]<<"\n";
    top--;
}
void display()
{
    int i;
    if(top==-1)
    {
        cout<<"stack is empty";
        return ;
    }
    for(i=top;i>=0;i--)
    {
        cout<<"element is :"<<stack[i];
        cout<<"\n";
    }
}
int main()
{
    int s;
    do
    {
        cout<<"Enter 1 for insertion"<<"\n";
        cout<<"Enter 2 for deletion"<<"\n";
        cout<<"Enter 3 for display"<<"\n";
        cout<<"Enter 4 to exit"<<"\n";
        cout<<"Enter your choise: ";
        cin>>s;
        switch(s)
        {
            case 1:
               push();
               break;
            case 2:
               pop();
               break;
            case 3:
               display();
               break;
            case 4:
               exit(0);
            default:
               cout<<"wrong choise";
               break;
        }
    } while (1);
    
}