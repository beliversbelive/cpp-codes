#include<iostream>
using namespace std;
int main()
{
    int i=0,n=20,a[100]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
           c++;
           if(c==5)
           {
               for(int j=n;j>=i;j--)
               {
                   a[j+1]=a[j];
                   
               }
               a[i+1]=0;
               cout<<"Enter kr dia\n";
               i++;
               c=0;
               n++;
           }
           
           for(int k=0;k<n;k++)
           {
            cout<<a[k]<<" ";
           }
           cout<<" "<<c<<"\n";
       }
       else
       {
           c=0;
       }
    }
    cout<<"after bit stuffing :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}