#include<iostream>
using namespace std;
int main()
{
    int a[10],x,flag,i,l=0,u=9,mid;
    cout<<"\n Enter ten elsements of array";
    for(i=0;i<10;i++) 
    {
        cin>>a[i];
    }
    cout<<"\n Enter Searching Element"; 
    cin>>x;
    flag=0;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(a[mid]==x)
        {
            flag=1;
            break;
        }
        else if(x<a[mid])
        {
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(flag==1)
       cout<<"\n Element founded";
    else
        cout<<"\n element not found";
}
