#include<iostream>
#include<stack>
using namespace std;
const int N = 300008;
int a[N];
int main_stl_satck()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	stack<int>st;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[st.top()] < a[i])
		{
			st.pop();
			if (!st.empty())
			{
				int last = st.top();
				ans +=(i- last+1);
			}
		}
		st.push(i);
	}
	ans += (n - 1) * 2;
	cout << ans;
	system("pause");
	return 0;
}