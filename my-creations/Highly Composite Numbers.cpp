#include <iostream>
using namespace std;
class hcn
{
	private:
	        long n;
	public:
	       void nums();
	       long d(long);
};
void hcn::nums()
{
	long t=0,c=0,i;
	cout<<"Enter the last number upto which HIGHLY COMPOSITE NUMBERS are required\n";
	cin>>n;
	cout<<"The HIGHLY COMPOSITE NUMBERS are:\n";
	for(i=2;i<=n;i++)
	{
		t=d(i);
		if(t>c)
		{
			c=t;
			t=0;
			cout<<i<<endl;
		}
	}
}
long hcn::d(long j)
{
	long i,p=0;
	for(i=1;i<=(n/2);i++)
	{
		if(j%i==0)
		{
			p++;
		}
	}
	return(p);
}
int main()
{
	hcn h;
	h.nums();
	return 0;
}
