#include <iostream>
using namespace std;
int main_shu_daxiao()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int ls = k;
		int rs = k;
		int ans = 1;
		while (1)
		{
			ls = (ls - 1) * m + 2;
			rs = m * rs + 1;
			if (ls > n)break;
			if (rs >= n)
			{
				ans += n - ls + 1;
				break;
			}
			ans += rs - ls + 1;
		}
		cout << ans << endl;
	}
	return 0;
}