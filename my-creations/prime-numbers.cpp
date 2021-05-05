#include <iostream>
using namespace std;
int main()
{
	long n, i, j;
	char a;
	int flag = 0;
	do
	{
		cout << "enter the last number upto where prime numbers are required\n";
		cin >> n;
		cout << "prime numbers are: \n2\n3\n5\n";
		for (i = 4; i <= n; i++)
		{
			for (j = 2; j < (i / 2); j++)
			{
				if (i % j == 0)
				{
					goto x;
				}
				else
				{
					flag = 1;
				}
			}
			if (flag == 1)
			{
				cout << i << "\n";
			}
		x:
			flag = 0;
		}
		cout << "Do you want to exit?(y=yes , n=no) : ";
		cin >> a;
	} while (a == 'n');
	return 0;
}