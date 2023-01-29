#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*start=NULL;
void create()
{
    int n,i;
    struct node *temp,*last;
    cout<<"enter no. of nodes: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        temp=new node;
        cout<<"enter data of node: ";
        cin>>temp->data;
        temp->next=NULL;
        if(start==NULL)
        {
            start=temp;
        }
        else
        {
            last->next=temp;
        }
        last=temp;
    }
    cout<<"\n";
}
void display()
{
    struct node *temp;
    if(start==NULL)
    {
        cout<<"list is empty\n";
        return ;
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<"element is: ";
            cout<<temp->data<<"\n";
            temp=temp->next;
        }
        return;
    }
    cout<<"\n";
}
void ins_beg()
{
    struct node*temp;
    temp=new node;
    cout<<"enter data of new node: ";
    cin>>temp->data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
    cout<<"\nnode inserted at beginning\n";
}
void ins_end()
{
    struct node*temp,*last;
    temp=new node;
    cout<<"enter data of new node: ";
    cin>>temp->data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        last=start;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=temp;
    }
    cout<<"\nnode inserted at end\n";
}
void ins_anypos()
{
    int count=0,pos,i;
    struct node*temp,*last;
    temp=new node;
    last=start;
    while(last!=NULL)
    {
        count++;
        last=last->next;
    }
    cout<<"enter positon at which node will be inserted (from 1 to"<<count<<")";
    cin>>pos;
    if(pos>count+1)
    {
        cout<<"invalid position\n";
        return;
    }
    cout<<"enter data of new node";
    cin>>temp->data;
    last=start;
    for(i=1;i<pos-1;i++)
    {
        last=last->next;
    }
    temp->next=last->next;
    last->next=temp;
    cout<<"node inserted at:"<<pos<<"\n";
}
void del_beg()
{
    struct node*temp;
    if(start==NULL)
    {
        cout<<"list is empty";
        return ;
    }
    else
    {
        temp=start;
        start=temp->next;
        cout<<"\nnode deleted at beginning\n";
        delete(temp);
    }
}
void del_end()
{
    struct node *temp,*last;
    if(start==NULL)
    {
        cout<<"list is empty";
        return ;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            last=temp;
            temp=temp->next;
        }
        cout<<"the element to be deleted is :"<<temp->data;
        last->next=NULL;
        delete(temp);
    }
}
void del_anypos()
{
    int count=0,pos,i;
    struct node*temp,*last;
    last=start;
    while(last!=NULL)
    {
        count++;
        last=last->next;
    }
    cout<<"enter positon at which node will be deleted (from 1 to"<<count<<")";
    cin>>pos;
    if(pos>count)
    {
        cout<<"invalid position\n";
        return;
    }
    if(pos==1)
    {
        temp=start;
        start=temp->next;
        cout<<"element deleted is:"<<temp->data<<"\n";
    }
    else
    {
        temp=start;
        for(i=1;i<pos;i++)
        {
            last=temp;
            temp=temp->next;
        }
        last->next=temp->next;
        cout<<"element deleted is :"<<temp->data<<"\n";
        delete(temp);
    }
}
int main()
{
    int s;
    do
    {
        cout<<"Enter 1 to create node"<<endl;
        cout<<"Enter 2 to display data of node"<<endl;
        cout<<"Enter 3 to insert a node at beginning"<<endl;
        cout<<"Enter 4 to insert a node at end"<<endl;
        cout<<"Enter 5 to insert a node at any position"<<endl;
        cout<<"Enter 6 to delete a node at beginning"<<endl;
        cout<<"Enter 7 to delete a node at end"<<endl;
        cout<<"Enter 8 to delete a node at any position"<<endl;
        cout<<"Enter 0 to exit "<<endl;
        cout<<" \nEnter your choise: ";
        cin>>s;
        cout<<"\n";
        switch(s)
        {
            case 1:
               create();
               break;
            case 2:
               display();
               break;
            case 3:
               ins_beg();
               break;
            case 4:
               ins_end();
               break;
            case 5:
               ins_anypos();
               break;
            case 6:
               del_beg();
               break;
            case 7:
               del_end();
               break;
            case 8:
               del_anypos();
               break;
            case 0:
               exit(0);
            default:
               cout<<"wrong choise";
        }
    } while (1);
    return 0;
}