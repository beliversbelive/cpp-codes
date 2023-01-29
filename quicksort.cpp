#include<iostream>
using namespace std;
#define size 10
void quick(int[],int,int);
int partition(int[],int,int);
int main()
{
    int a[size],i;
    cout<<"Enter elements of array :"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    quick(a,0,size-1);
    cout<<"after sorting elements are: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
void quick(int a[],int beg,int end)
{
    int x;
    if(beg<end)
    {
        x=partition(a,beg,end);
        quick(a,beg,x-1);
        quick(a,x+1,end);
    }
}
int partition(int a[],int beg,int end)
{
    int key,temp;
    key=beg;
    while(1)
    {
        while((a[key]<=a[end]) && (key!=end))
        {
            end--;
        }
        if(key==end)
        {
            return(key);
        }
        temp=a[key];
        a[key]=a[end];
        a[end]=temp;
        key=end;
        while((a[key]>=a[beg]) && (key!=beg))
        {
            beg++;
        }
        if(key==beg)
        {
            return(key);
        }
        temp=a[key];
        a[key]=a[beg];
        a[beg]=temp;
        key=beg;
    }
}