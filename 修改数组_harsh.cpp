//langqioaoj 185 
#include <iostream>
using namespace std;
const int N = 10010;
static int a[N];
int main_harsh()
{
	int n;
	cin >> n;
	int num = 1;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		while (a[x] == 1)
		{
			x++;
			a[x] = 1;
			cout << x << " ";
		}
		
		
	}
	return 0;
}