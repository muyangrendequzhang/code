//Ô¼Éª·òÎÊÌâ luogu 1996 queue °æ
#include <iostream>
using namespace std;
#define N 1000
struct qusue1
{
	int a[N];
	int head;
	int tail;
	void init()
	{
		head = 0;
		tail = -1;
	}
	int size()
	{
		return tail - head + 1;
	}
	void push(int data)
	{
		a[++tail] = data;
	}
	int front()
	{
		return a[head];
	}
	void pop()
	{
		head++;
	}
};
int main_yue()
{
	qusue1 q;
	q.init();
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (q.size() != 0)
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