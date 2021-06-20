//cpp program to implement sorting using Selection sort technique
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int len)
{
for(int i=0; i<len-1; i++) 
{
int min_idx = i; 
for(int j=i+1; j<len; j++) 
{
if(arr[j] < arr[min_idx]) 
{
min_idx = j;
}
}
swap(arr[i], arr[min_idx]);
}
}
int main()
{
int n;
cout<<"Enter a number :";
cin>>n;
int arr[n];
cout<<"Enter array Elements :";
for(int i=0; i<n; i++)
cin>>arr[i];
cout<<"Before Sorting : ";
for(int i=0; i<n; i++)
cout<<arr[i]<<" ";
cout<<endl;
selection_sort(arr, n);
cout<<"After Sorted : ";
for(int i=0; i<n; i++)
cout<<arr[i]<<" ";
}
