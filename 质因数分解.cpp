#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
	ll a;
	cin >> a;
	for (ll i = 2; i <= sqrt(a); i++)
	{
		ll cnt = 0;
		if (a % i == 0)
		{
			while (a % i == 0)
			{
				a /= i;
				cnt++;//¼ÇÂ¼´ÎÊý
			}
			if (cnt == 1)
			{
				cout << i;
			}
			else
			{
				cout << i << "^" << cnt;
			}
			cout << "*";
		}
	}
	cout << a;
	return 0;
}