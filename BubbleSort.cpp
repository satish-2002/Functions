//cpp program to implement sorting using Bubble sor technique
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int len)
{
	for(int i=0; i<len-1; i++) 
	{
		int swaps = 0;
		for(int j=0; j<len-i-1; j++)
		{
			if(arr[j] > arr[j+1]) 
			{
				swaps++; 
				swap(arr[j], arr[j+1]); 
			}
		}
		if(!swaps) 
		break;
	}
}
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"Before Sorting: ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	bubble_sort(arr, n);
	cout<<"After Sorting: ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
} 



