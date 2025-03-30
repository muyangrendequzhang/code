#include"my_lab.h"//先进后出
using namespace std;
int main_stack()
{
	stack<double>stk;
	stk.push(1.0);
	stk.push(1.4);
	cout << stk.size() << endl;
	
	cout << stk.empty() << endl;
	stk.pop();

	cout << stk.top() << endl;
	system("pause");
	return 0;
}