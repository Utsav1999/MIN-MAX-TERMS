#include<iostream>
using namespace std;
int maxx=INT_MIN,minn=INT_MAX;
void max_min(int a[],int l,int h,int max1,int min1)
{
	int mid;
	if(l==h)
	{
		min1=a[l];
		max1=a[h];
	}
	else if(l==h-1)
	{
		if(a[l]>a[h])
		{
			min1=a[h];
			max1=a[l];
		}
		else if(a[l]<a[h])
		{
			min1=a[l];
			max1=a[h];
		}
		else
		{
			min1=a[l];
			max1=a[h];
		}
	}
	else
	{
		mid=(l+h)/2;
		max_min(a,l,mid,max1,min1);
		
		max_min(a,mid+1,h,maxx,minn);
	}
	if(minn>min1)
		minn=min1;
	if(max1>maxx)
		maxx=max1;
}
int main()
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	int i,a[n];
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max_min(a,0,n-1,maxx,minn);
	cout<<"The Minimum is: "<<minn<<endl;
	cout<<"The Maximum is: "<<maxx<<endl;
	return 0;
}
