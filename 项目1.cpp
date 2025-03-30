#include<iostream>
#include<vector>
using namespace std;
static int sum[100];
void front(vector<int>&arr,int len)//将vector容器作为参数
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum[i] += arr[j];
		}
	}
}
void frontsum(int r,int l)
{
	cout << sum[l] - sum[r-1] << endl;
}
int main_qianzhuihe()
{
	int m;
	int n;
	cin >> n;//输入数组大小
	cin >> m;
	vector<int>arr(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	front(arr, n);
	while (m)
	{
		int r, l;
		//r为起始位置，l为结束位置
		cin >> r >> l;
		frontsum(r-1, l-1);
		m--;
	}
	system("pause");
	return 0;
}