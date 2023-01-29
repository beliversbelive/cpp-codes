#include<iostream>
using namespace std;
int main()
{
    int a[10],n,temp,i,j;
    cout<<"enter the no of elements of array :";
    cin>>n;
    cout<<"enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"the sorted array is ;";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}