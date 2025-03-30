#include<iostream>
using namespace std;
const int N = 5010;
static int s[N];
void init_set()
{
	for (int i = 0; i < N; i++)s[i] = i;
}
static int find_set(int x)
{
	if (s[x] == x)return x;
	else
	{
		return find_set(s[x]);
	}
}
static void merge_set(int x,int y)
{
	x = find_set(x);
	y = find_set(y);
	if (x != y)s[x] = s[y];
}
int main_mergeset()
{
	init_set();
	int n, m, p;
	cin >> n >> m >> p;
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		merge_set(x, y);
	}
	while (p--)
	{
		int x, y;
		cin >> x >> y;
		if (find_set(x) == find_set(y))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	
	system("pause");
	return 0;
}