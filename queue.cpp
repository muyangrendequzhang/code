#include"my_lab.h"//�Ƚ��ȳ�
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
	cout << que.size() << endl;//2,����һ�ζԣ��ѵ�һ������1����ȥ��
	cout << que.empty() << endl;//0,��Ϊ��
	
	system("pause");
	return 0;
}