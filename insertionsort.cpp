#include<iostream>
using namespace std;
insertion_sort(int* a,int n)
{
	int i=0,j,key;
	for (i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while (j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
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
	insertion_sort(a,n);
	cout<<"sorted array:   ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
