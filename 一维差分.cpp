#include<iostream>
using namespace std;
static int a[100], b[100];
void cai(int n)
{
	b[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		b[i] = a[i] - a[i - 1];
	}
}
int main_cha()
{
	int m,n;
	cin >> n >> m;
	

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cai(n);
	while (m--)
	{
		int r, l, n;
		cin >> r >> l >> n;
		b[r - 1] += n;
		b[l] -= n;
	}
	cout << b[0];
	for (int i = 1; i < n; i++)
	{
		
		b[i] += b[i - 1];
		cout << b[i];
	}
	system("pause");
	return 0;
}