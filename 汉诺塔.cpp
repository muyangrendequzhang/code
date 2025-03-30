#include <iostream>
using namespace std;
static void fac(int n,char a,char b,char c)
{
	if (n == 0)return;
	fac(n - 1, a,c , b);
	cout << a << "->" << c<<endl;
	fac(n - 1, b, a, c);
	
}
int main_hnt()
{
	fac(3,'A','B','C');
	cin.get();
	return 0;
}