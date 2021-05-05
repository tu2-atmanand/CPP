#include <iostream>
using namespace std;
class pnu
{
	private:
	   long n;
	public:
	   void input();
	   void compute();
};
void pnu::input()
{
	cout<<"enter the last number upto where perfect numbers are required\n";
	cin>>n;
	compute();
}
void pnu::compute()
{
	long int i,sum,j;
	cout<<"THE PERFECT NUMBERS upto "<<n<<" are:\n";
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(i==sum)
		{
			cout<<"\n"<<i;
		}
		sum=0;
	}
}
int main()
{
	pnu p;
	p.input();
	return 0;
}
