#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxSumSubArray(int n,int a[])
{
	int Maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<j;k++)
			{
				sum+=a[k];
				Maxi=max(Maxi,sum);
			}
		}
	}
	return Maxi;
}
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<MaxSumSubArray(n,a);
	return 0;
}
