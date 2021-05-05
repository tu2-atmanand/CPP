#include <iostream>
using namespace std;
int main()
{
	long int n,i,j=0,l;
	int a[1000];
	cout<<"Enter the number to be checked as prime number or composite\n";
	cin>>n;
	if(n==1||n==0)
	{
		cout<<"It is niether prime nor a composite number\n";
		goto x;
	}
	l=(n/2);
	for(i=2;i<=l;i++)
	{
		if(n%i==0)
		{
			a[j]=i;
			j++;
		}
	}
	if(j==0)
	{
		cout<<"The entered number is a prime number\n";
	}
	else
	{
		cout<<"The entered number is a composite number having factors:\n";
		for(i=0;i<j;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
	x:return 0;
}
