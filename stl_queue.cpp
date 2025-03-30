#include <iostream>
#include<queue>
using namespace std;
int main_queue_stl()
{
	queue<int>q;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		for (int i = 1; i < m; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}