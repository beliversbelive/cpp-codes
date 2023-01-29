#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,temp;
    cout<<"enter no of elements";
    cin>>n;
    cout<<"\n Enter ten elsements of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted element is";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
    
}
