#include <iostream>
using namespace std;
int main()
{
	long int i,j,coef;
	cout<<"enter the line whose coefficients are neded\n";
	cin>>i;
	for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout<<j+1<<")"<<coef<<endl;
        }
        return 0;
}
