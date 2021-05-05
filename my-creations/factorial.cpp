#include <iostream>
using namespace std;
void fact(long n)
{
	long i,f=1;
	for(i=1;i<=n;i++)
	{
		cout<<f*i<<endl;
	}
}
int main()
{
	long n;
	cout<<"enter the number\n";
	cin>>n;
	fact(n);
	return 0;
}
