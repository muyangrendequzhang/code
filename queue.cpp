#include"my_lab.h"//先进先出
using namespace std;
int main_queue()
{
	queue<int>que;
	que.push(1);
	que.push(2);
	que.push(3);
	cout << que.front() << endl;//1
	cout << que.back() << endl;//3
	que.pop();
	cout << que.front() << endl;//2
	cout << que.back() << endl;//3
	cout << que.size() << endl;//2,出了一次对，把第一个进的1给出去了
	cout << que.empty() << endl;//0,不为空
	
	system("pause");
	return 0;
}