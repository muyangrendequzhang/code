//langqiaooj 3255ÖØĞÂÅÅ¶Ó
#include<iostream>
#include<list>
using namespace std;
list<int>lis = { 1 };
void behind(int x, int y)
{
	lis.remove(x);
	for (auto it = lis.begin(); it != lis.end(); ++it)
	{
		if (*it == y)
		{
			it++;
			lis.insert(it, x);
			break;
		}
	}
}
void front(int x, int y)
{
	lis.remove(x);
	for (auto it = lis.begin(); it != lis.end(); ++it)
	{
		if (*it == y)
		{
			lis.insert(it, x);
			break;
		}
	}
}

int main_cxpd()
{
	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= n; i++)
	{
		lis.push_back(i);
	}
	while (m--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (z == 0)
		{
			behind(x, y);
		}
		else
		{
			front(x, y);
		}
	}
	for (auto i : lis)
	{
		cout << i << " ";
	}
	
	return 0;
}
