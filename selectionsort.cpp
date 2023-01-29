#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10],n,temp;
    cout<<"enter the no. of elements: ";
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"the sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
}