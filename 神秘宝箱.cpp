//À¶ÇÅoj 3743
#include <iostream>
#include<stack>
using namespace std;
int main_secret()
{
	int x;
	stack<int>st;
	while (cin >> x)
	{
		
		if (x == ')'&&!st.empty())
		{

			if (st.top() == '(')
			{
				st.pop();
			}
			else
			{
				cout << 'N';
				return 0;
			}
		}
		if (x == ']'&&!st.empty())
		{
			if (st.top() == '[')
			{
				st.pop();
			}
			else
			{
				cout << 'N';
				return 0;
			}
		}
		if (x == '}'&& !st.empty())
		{
			if (st.top() == '{')
			{
				st.pop();
			}
			else
			{
				cout << 'N';
				return 0;
			}
		}
		
		if (x == '(' || x == '{' || x == '[')
		{
			st.push(x);
		}
	}
	if (st.empty())
	{
		cout << 'Y';
		return 0;
	}
	return 0;
}