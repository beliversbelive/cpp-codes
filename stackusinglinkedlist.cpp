#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *top,*next;
};
struct node*top=NULL;
void push()
{
    struct node *temp;
    temp=new node;
    cout<<"\nenter data ";
    cin>>temp->data;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
    cout<<"node inserted"<<"\n";
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"stack is empty"<<"\n";
        return ;
    }
    temp=top;
    top=temp->next;
    cout<<temp->data<<" deleted"<<"\n";
    delete(temp);
}
void display()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"stack is empty";
        return;
    }
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}
int main()
{
    int s;
    do
    {
        cout<<"\nEnter 1 to insert data"<<"\n";
        cout<<"Enter 2 to delete data"<<"\n";
        cout<<"Emter 3 to display data"<<"\n";
        cout<<"Enter 4 to exit"<<"\n";
        cout<<"enter your choise:";
        cin>>s;
        switch (s)
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