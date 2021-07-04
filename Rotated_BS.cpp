#include <iostream>
using namespace std;

int Rotated_BS(int low,int high,int a[],int T)
{
	while(low<=high)
	{
		int mid=(low+high)>>1;
		if(T==a[mid])
		{
			return mid;
		}
		if(a[mid]<a[0])
		{
			if(T>=a[0] || T<a[mid])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		else
		{
			if(T>a[mid] || T<a[0])
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	return -1;
}

int main()
{
	int n,T,pos;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter key to search:";
	cin>>T;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	cin>>a[i];
		for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	pos=(Rotated_BS(0,n-1,a,T))+1;
	cout<<endl<<"Key found at "<<pos<<"th position in the array.";
}
