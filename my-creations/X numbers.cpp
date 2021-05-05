#include <iostream>  //not working for big numbers//
using namespace std;
int main()
{
	int a[10000],n,i,j=0,l,p=0,k;
	cout<<"enter the last number upto which x numbers are required\n";
	cin>>n;
	n=n+9;
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	i=0;
	for(l=2;l<=n;l++)
	{
		k=1;
		for(i=l*k;i<n;i=l*k)
		{
			for(j=i;j<n;j++)
			{
				p=j-k;
				a[p]=a[p+1];
			}
			for(p=p+1;p<n-1;p++)
			{
				a[p]=a[p+1];
			}
			n--;
			k++;
		}
	}
	cout<<"The X numbers are:\n";
	for(i=0;i<n-3;i++)
	{
		cout<<"\t"<<a[i];
	}
	return 0;
}
