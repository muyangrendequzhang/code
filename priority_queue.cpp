#include"my_lab.h"
using namespace std;
int main_priority_queue()
{
	priority_queue<int,vector<int>,greater<int>>pque;
	pque.push(1);
	pque.push(4);
	pque.push(5);
	pque.push(3);
	cout << pque.top() << endl;
	pque.pop();
	cout << pque.top() << endl;
	system("pause");
	return 0;
}