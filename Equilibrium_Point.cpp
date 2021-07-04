#include <iostream>
using namespace std;

int equilibrium_Point(int n,int a[])
{
	if(n==1)
	{
		return 1;
	}
	for(int i=1;i<n;i++)
	{
		int leftSum=0,rightSum=0;
		for(int j=0;j<i;j++)
		{
			leftSum+=a[j];
		}
		for(int k=i+1;k<n;k++)
		{
			rightSum+=a[k];
		}
		if(leftSum==rightSum)
		{
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int n,pos;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	pos=equilibrium_Point(n,a);
	cout<<"The Equilibrium point in the array is at "<<pos<<"th position";
	return 0;
}
