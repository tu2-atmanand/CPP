#include <iostream>
#include <string.h>
using namespace std;
long fact(long z)
{
    long f=1,i;
    if (z == 0)
    {
        return(f);
    }
    else
    {
        for (i = 1; i <= z; i++)
	{
            f = f * i;
	}
    }
    return(f);
}
int main()
{
    long n,r,ncr,p,q,s;
      cout<<"\n Enter the value for N and R \n";
      cin>>n;
      cin>>r;
      p=fact(n);
      q=fact(r);
      s=fact(n-r);	
      ncr =p/ (q*s);
      cout<<"\n The value of ncr is: "<<ncr<<"\n";
    return 0;
}
