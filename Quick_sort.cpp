#include <iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb,end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
	swap(a[lb],a[end]);
	return end;
}
void Quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int loc=partition(a,low,high);
		Quick_sort(a,low,loc-1);
		Quick_sort(a,loc+1,high);
	}
}
int main()
{
	int n;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Quick_sort(a,0,n-1);
	cout<<"Array elements after sorted:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
