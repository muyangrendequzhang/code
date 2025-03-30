#include <iostream>
using namespace std;
static int fac(int n)
{
	if (n == 1)return 1;
	return n * fac(n - 1);
}
int main_jc()
{
	cout << fac(3);
	cin.get();
	return 0;
}