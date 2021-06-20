#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(int low,int mid,int high,int a[])
{
	int left=low,right=mid+1;
	vector<int>temp;
	while(left<=mid && right<=high)
	{
		if(a[left]<a[right])
		{
			temp.push_back(a[left]);
			left++;
		}
		else
		{
			temp.push_back(a[right]);
			right++;
		}
	}
	while(right<=high)
	{
		temp.push_back(a[right]);
		right++;
	}
	while(left<=mid)
	{
		temp.push_back(a[left]);
		left++;
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=temp[i-low];
	}
}	

void MergeSort(int low,int high,int a[])
{
	if(low==high)
	{
		return;
	}
	int mid=(low+high)/2;
	MergeSort(low,mid,a);
	MergeSort(mid+1,high,a);
	Merge(low,mid,high,a);
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int a[n];
	cout<<"Enter array Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	MergeSort(0,n-1,a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
