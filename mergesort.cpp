#include<iostream>
using namespace std;
void mergesort(int[],int,int);
void mergearray(int[],int,int,int);
int main()
{
	int a[5],i;
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,4);
	cout<<"after sorting elements are: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
void mergesort(int a[],int beg ,int end)
{
	int mid;
	if(beg<end)
	{
	  mid = (beg + end)/2;
	  mergesort(a,beg,mid);
	  mergesort(a,mid+1,end);
	  mergearray(a,beg,mid,end);
    }
}
void mergearray(int a[],int beg,int mid,int end)
{
    int i,b[5],j,k;
    for(i=beg;i<=end;i++)
    {
   	  b[i]=a[i];
   	  i=beg;
   	  j=mid+1;
   	  k=beg;
    }
    while((i<=mid) && (j<=end))
    {
   	  if(b[i]<=b[j])
      {
         a[k]=b[i];
   		 i++;
   		 k++;
      }
      else 
      {
    	 a[k]=b[j];
    	 j++;
    	 k++;
	  }  
    }
    if(i<=mid)
    {
   	   while(i<=mid)
   	   {
   		 a[k]=b[i];
   		 i++;
   		 k++;
	   }
    }
    else
    {
   	   while (j<=end)
       {
         a[k] = b[j];
   		 k++;
         j++;
       }
    }

}