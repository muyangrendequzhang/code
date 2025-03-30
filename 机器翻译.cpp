//lanqiaooj 511 机器翻译
#include <iostream>
#include<queue>
using namespace std;
static bool arr[1005];
int main_robot_queue()
{
	int ans = 0;
	int m, n;
	cin >> m >> n;//m是内存 n是文章长度
	queue<int>q;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (arr[x]==false)
		{
			arr[x] = true;
			if (q.size() < m)
			{
				q.push(x);
			}
			else
			{
				arr[q.front()] = false;
				q.pop();
				q.push(x);
			}
			ans++;
		}

	}
	cout << ans;
	return 0;
}