#include<iostream>
using namespace std;
double multiply(double mid,int n)
{
	double ans=1.0;
	for(int i=1;i<=n;i++)
	{
		ans=ans*mid;
	}
	return ans;
}
double nthRoot(int n,int m)
{
	double low=1;
	double high=m;
	double bound=1e-6;
	while((high-low)>bound)
	{
		double mid=(low+high)/2.0;
		if(multiply(mid,n)<m)
		{
			low=mid;
		}
		else
		{
			high=mid;
		}
	}
	cout<<low<<" ";
}
int main()
{
	int n,m;
	cout<<"Enter nth root:";
	cin>>n;
	cout<<"Enter a number:";
	cin>>m;
	nthRoot(n,m);
	return 0;
}
