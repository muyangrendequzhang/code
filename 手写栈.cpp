#include<iostream>
using namespace std;
const int N = 36000;
struct stack
{
	int a[N];
	int t = -1;
	void push(int data) { a[++t] = data; };
	int top() { return a[t]; };
	void pop() { if (t > -1)t--; };
	int size() { return t + 1; };
	int empty() { return t == -1 ? 1: 0; };
};
int main_stack()
{
	stack st;
	char x;
	while (cin >> x)
	{
		if (x == '@')break;
		if (x == '(')st.push(x);
		if (x == ')')
		{
			if (!st.empty())
			{
				st.pop();
			}
			else
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	if (st.empty())
	{
		cout << "YES" << endl;

	}
	else
	{
		cout << "NO" << endl;
	}
	system("pause");
	return 0;
}