#include <iostream>
using namespace std;
static int fac(int n)
{
	if (n == 1)return 1;
	if (n == 2)return 1;
	return fac(n - 1) + fac(n - 2);
	
}
static int fac1(int n)
{
	int k = 1;
	int m = 1;
	for (int i = 0; i < n-2; i++)
	{
		if (i % 2 == 0)
		{
			k += m;
		}
		else
		{
			m += k;
		}
	}
	return m > k ? m : k;

}
static int fac2(int n)
{
	int* p = new int[n];
	p[0] = p[1] = 1;
	for (int i = 2; i < n; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
	}
	int sum = p[n-1];
	delete p;
	return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << fac(n)<<endl;
	cout << fac1(n)<<endl;
	cout << fac2(n) << endl;
	system("pause");
	return 0;
}