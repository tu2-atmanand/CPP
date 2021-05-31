#include <iostream>
using namespace std;
void pfactors()
{
	long n,i,j=2;
	cout<<"enter the number to find its prime factors\n";
	cin>>n;
	for(i=n;i!=1;)
	{
		while(j<=(n/2))
		{
			if(i%j==0)
			{
				if(j>10)
				{
					cout<<j<<" | "                <<i<<endl;
				}
				else
				{
					cout<<" "<<j             <<" | "<<i<<endl;
				}
				if(i==n)
				{
				    cout<<"--------------"<<endl;
				}
				i=i/j;
				j=1;
			}
			j++;
		}
	}
	cout<<"     1\n";
}
int main()
{
    pfactors();
    return 0;
}
