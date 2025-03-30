#include<iostream>
#include<algorithm>
using namespace std;
struct node { int x, y, t; }e[100010];
bool compare(node a,node b)
{
	return a.t < b.t;
}
static int s[100010];
static int find_set(int x)
{
	if (s[x] != x)
	{
		s[x] = find_set(s[x]);
	}
	return s[x];
}
int main_restore_load()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)s[i] = i;
	for (int i = 1; i <= m; i++)
	{
		cin >> e[i].x >> e[i].y >> e[i].t;
	}
	sort(e + 1, e + 1 + m, compare);
	int ans = 0;
	int num = 0;
	for (int i = 1; i <= m; i++)
	{
		int x = find_set(e[i].x);
		int y = find_set(e[i].y);
		if (x == y)continue;
		s[x] = y;
		num++;
		ans = max(ans, e[i].t);
	}
	if (num != n - 1)
	{
		cout << -1 ;
	}
	else
	{
		cout << ans ;
	}
	
	return 0;
}