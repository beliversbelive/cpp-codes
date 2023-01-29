#include<iostream>
using namespace std;
int main()
{
    int a[10],x,flag,i;
    cout<<"\n Enter ten elsements of array";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Enter Searching Element"; 
    cin>>x;
    flag=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
       cout<<"\n Element founded";
    else
        cout<<"\n element not found";
}
