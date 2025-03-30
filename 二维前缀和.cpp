#include<iostream>
using namespace std;
void fun(int arr[][5], int x, int y, int x1, int y1, int x2, int y2)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + arr[i][j];
		}
	}
	cout << arr[x2][y2] - arr[x2][y1 - 1] - arr[x1 - 1][y2] + arr[x1 - 1][y1 - 1];
}
int main_fun()
{
	int arr[4][5];
	int lenx = sizeof(arr) / sizeof(arr[0]);
	int leny = sizeof(arr) / sizeof(arr[0][0]) / lenx;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			cin >> arr[i][j];
		}
	}
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	fun(arr, 3, 4, x1, y1, x2, y2);
	cin.get();
	return 0;
}