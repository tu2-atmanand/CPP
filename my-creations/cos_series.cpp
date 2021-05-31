#include<iostream>
#include<math.h>
using namespace std;
class series
{
	int n;
	float x;
	public:
		void input();
		float compute();
		void display();
};
void series:: input()
{
	cout<<"COSINE SERIES:\n";
	cout<<"enter the angle in degrees\n";
	cin>>x;
	cout<<"enter number of terms\n";
	cin>>n;
}
float series::compute()
{
	float term,sum=0;
	int fact;
	x*=3.14/180;
	for(int i=0;i<=n;i++)
	{
		fact=1;
		for(int b=2*i;b>0;b--)
		fact*=b;
		term=pow(x,2*i)/fact;
	if(i%2==0)
	sum+=term;
	else
	sum-=term;
	}
	return sum;
}
void series::display()
{
	cout<<"compute function:"<<compute()<<endl;
	cout<<"built-in function:"<<cos(x)<<endl;
}

int main()
{
	series s;
	s.input();
	s.display();
	return 0;
}
