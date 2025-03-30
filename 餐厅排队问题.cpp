//langqiaooj ²ÍÌüÅÅ¶ÓÎÊÌâ 3745
#include <iostream>
#include<queue>
using namespace std;
int main_resturant_problem()
{
	queue<int>q;
	int num;
	cin >> num;
	while (num--)
	{
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			int id;
			cin >> id;
			q.push(id);
			break;
		}
		case 2:
		{
			q.pop();

			break;
		}
		case 3:
		{
			cout << q.front() << " " << q.back() << endl;
			break;
		}
		}
		
	}

	return 0;
}