#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front=-1,rear=-1;
void insert()
{
    int item;
    if(((rear==(size-1)) && (front==0)) || (front==rear+1))
    {
        cout<<"queue is full";
        return ;
    }
    else
    {
        rear=(rear+1)%size;
        cout<<"enter data to be inserted : ";
        cin>>item;
        queue[rear]=item;
        cout<<"element inserted.";
    }
    if(front==-1)
    {
        front=0;
    }
}
void del()
{
    int item;
    if (front==-1)
    {
        cout <<"queue is emoty :- "<<endl;
        return;
   }

   else 
   {
       item = queue[front];
       cout<<"DLETED ITEM IS SUCCESSFULYY :- "<<endl;

   }

   if (front == rear)
   {
       front = rear = -1;
   }

   else 
   {
       front=(front+1)%size;
   }
}

void display(void)
{
    int i;
    if(front==-1)
    {
        cout<<"QUEUE IS EMPTY :- "<<endl;
        return;
    }
    for(i=front;i!=rear; i=(i+1)%size)
    {
        cout<<queue[i];
        cout<<"\n";
    }
    cout<<queue[i];
    

}

int main()
{
    int s;

    do
    {
        cout<<"ENTER 1 FOR INSERTION OIPERTAION :- "<<endl;
        cout<<"enter 2 for deletetion operation :- "<<endl;
        cout<<"ENETR 3 FOR TRAVERSINFG OPERTATION :- "<<endl;
        cout<<"enter 4 to exit"<<endl;
        cout<<"ENETR YOU'RE CHOICE :- "<<endl;
        cin>>s;

        switch(s)
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
                cout<<"WRONG CHOICE :-  "<<endl;
                break;               
        }
    } while (1);
}