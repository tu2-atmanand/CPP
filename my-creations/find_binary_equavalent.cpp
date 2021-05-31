#include <iostream>
using namespace std;
class convert
{
private:
	int n, c;
	void compute();
	int a[200];

public:
	void input();
	void display();
};
void convert::input()
{
	cout << "enter a number to find its binary equivalent : ";
	cin >> n;
}
void convert::display()
{
	int i;
	compute();
	cout << "\nThe binary equivalent of " << n << " is " << endl;
	for (i = 0; i < c; i++)
	{
		cout << a[i];
	}
}
void convert::compute()
{
	int i = 0, j, temp;
	while (n > 1)
	{
		a[i] = n % 2;
		n = n / 2;
		i++;
	}
	a[i + 1] = 1;
	c = i + 1;
}
int main()
{
	convert c1;
	c1.input();
	c1.display();
	return 0;
}
