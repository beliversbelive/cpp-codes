#include<iostream>
using namespace std;
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front=NULL,*rear=NULL;
void insert()
{
    struct queue *temp;
    temp=new queue;
    cout<<"enter data to insert";
    cin>>temp->data;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=rear->next;
    }
    cout<<"Data inserted."<<"\n";
}
void del()
{
    struct queue*temp;
    if(front==NULL)
    {
        cout<<"queue is empty"<<"\n";
        return ;
    }
    else
    {
        temp=front;
        front=front->next;
    }
    cout<<"deleted element is :"<<temp->data<<"\n";
    delete(temp);
    if(front==NULL)
    {
        front=rear=NULL;
    }
}
void display()
{
    struct queue* temp;
    if(front==NULL)
    {
        cout<<"queue is empty";
        return ;
    }
    temp=front;
    while(temp!=NULL)
    {
        cout<<"element is :"<<temp->data<<"\n";
        temp=temp->next;
    }
}
int main()
{
    int s;
    do
    {
        cout<<"Enter 1 to insert."<<"\n";
        cout<<"Enter 2 to delete."<<"\n";
        cout<<"Enter 3 to display."<<"\n";
        cout<<"Enter 4 to exit."<<"\n";
        cout<<"Enter your choise: ";
        cin>>s;
        switch (s)
        {
            case 1:
               insert();
               break;
            case 2:
               del();
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