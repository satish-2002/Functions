//Program to check given number is prime number or not using Recursion funtion
#include<bits/stdc++.h>
using namespace std;
int prime_number(int n) 
int i=2;
{
	if(n<i)
	{
		return 0;
	}
	if(n==i)
	{
		return 1;
	}
	if(n%i==0)
	{
		return 0;
	}
	if (i>=sqrt(n)+1)
	{
		return 1;
	}
	return Prime(n,i+1);
}
int main()
{
	int n,result;
	cout<<"Enter  number:";
	cin>>n;
	result=prime_number(n);
	if(result==0)
	{
		cout<<n<<" not a prime number";
	}
	else
	{
		cout<<n<<" it is a prime number.";
	}
}