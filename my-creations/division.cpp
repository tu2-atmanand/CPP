#include <iostream>
using namespace std;
void division()
{
	long int n,d,i,p,s;
	cout<<"enter the numerator and denomintor\n";
	cin>>n;
	cout<<"/";
	cin>>d;
	cout<<"enter how many decimal places is required\n";
	cin>>p;
	cout<<endl<<"answer=";
	while(n>d)
	{
		s=n/d;
		cout<<s;
		n=n%d;
	}
	cout<<".";
	for(i=1;i<=p;i++)
	{
		if(n!=0)
		{
			n=n*10;
			if(n<d)
			{
				n*=10;
				cout<<"0";
			}
			s=n/d;
			cout<<s;
			n=n%d;
		}
		else
		{
			cout<<"0";
		}
	}
}
int main()
{
	division();
	return 0;
}
