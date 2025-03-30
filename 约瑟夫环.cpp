//langqiaooj Ô¼Éª·ò»· 1111
#include<iostream>
#include<list>
using namespace std;
int main_joseph_roll()
{
	list<int>lis;
	int n, k, m;
	cin >> n >> k >> m;
	int temp = n;
	n = k % n;
	for (int i = 0; i < temp; i++)
	{
		lis.push_back(n);
		++n;
		if (n > temp)
		{
			n = 1;
		}
	}
	while (!lis.empty())
	{
		for (int i = 0; i < m-1; i++)
		{
			lis.push_back(lis.front());
			lis.pop_front();
		}
		cout << lis.front() << endl;
		lis.pop_front();

	}
	
	return 0;
}