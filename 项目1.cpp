#include<iostream>
#include<vector>
using namespace std;
static int sum[100];
void front(vector<int>&arr,int len)//��vector������Ϊ����
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
	cin >> n;//���������С
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
		//rΪ��ʼλ�ã�lΪ����λ��
		cin >> r >> l;
		frontsum(r-1, l-1);
		m--;
	}
	system("pause");
	return 0;
}