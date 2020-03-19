#include<iostream>
using namespace std;
selection_sort(int *a,int n)
{
	int i,j,k,index,min,temp;
	for(i=0;i<n-1;i++)
	{
		//finding out minimum in the subarray a[i...n-1]
		min=a[i];
		index=i;
		
		for(j=i+1;j<n;j++)
		{
			if (a[j]<min)
			{
				min=a[j];
				index=j;
			}
		}
			a[index]=a[i];
			a[i]=min;
	//printing the array after each iteration
	for(k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<endl;
		
	}
}
int main()
{
	int n,i;
	cout<<"Enter no of elements:"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter array elemnets:"<<endl;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selection_sort(a,n);
	cout<<"sorted array:   ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
