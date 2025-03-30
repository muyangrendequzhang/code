#include<iostream>
using namespace std;
const int N = 100005;
static int a[N];
static int s[N];
int finds(int x)
{
	if (s[x] != x)
	{
		s[x] = finds(s[x]);
	}
	return s[x];
}
int main_end_just_a_while()
{
	int n;
	cin >> n;
	for (int i = 1; i <= N; i++)
	{
		s[i] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		int root = finds(x);
		x = root;
		a[i] = x;

		s[root] = finds(root + 1);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}