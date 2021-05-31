#include <iostream>
using namespace std;
#include <math.h>
int main()
{
	long n,x;
	long  f=0;
	long p;
	cout<<"enter the number to be checked as fibonacci number or not\n";
	cin>>n;
	x=(5*n*n)-4;
	p=sqrt(x);
	//cout<<p<<endl;//
	if(x==(p*p))
	{
	  
		f=1;
	}
	/*else
	{
	 cout<<"entered number is not a fibonacci number\n";
	}*/
	x=(5*n*n)+4;
	p=sqrt(x);
	if(x==(p*p))
	{
		f=1;
	
	}
	if(f==1)
	{
		cout<<"entered number is a fibonacci number\n";
	}
	else
	{
	 cout<<"entered number is not a fibonacci number\n";
	}
        
}
