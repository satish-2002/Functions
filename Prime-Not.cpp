//Program to check given number is prime or not using Recursion
#include<bits/stdc++.h>
using namespace std;
int Primerec(int n) 
{
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
	return Primerec(n);
}
}
int main()
{
	int i=0;
	int n,result;
	cout<<"Enter a number:";
	cin>>n;
	result=Primerec(n);
	if(result==0)
	{
		cout<<"Not a prime number";
	}
	else
	{
		cout<<"It is a prime";
	}
}


