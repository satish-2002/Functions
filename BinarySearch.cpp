//cpp program to find binary search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BSR(int low,int high,int k,int a[])
{
	if(low>high)
	{
		return -1;
	}
	int mid=(low+high)>>1;
	if(a[mid]==k)
	{
		return mid;
	}
	else if(a[mid]>k)
	{
		return BSR(low,mid+1,k,a);
	}
	else 
	{
		return BSR(mid-1,high,k,a);
	}
}
int main()
{
	int n,k;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter key to search:";
	cin>>k;
	cout<<BSR(0,n-1,k,a);
}
