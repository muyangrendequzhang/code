#include<iostream>
#include<vector>
using namespace std;
int baoli(vector<int>&arr,int len,int r,int l)
{
	int sum = 0;
	for (int i = r; i <= l; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main_baoli()
{
	int m;
	cin >> m;
	while (m)
	{
		int n;
		cin >> n;//n为数组大小
		vector<int>arr(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int r, l;
		cin >> r >> l;//r为初始位置，l为结束位置
		cout<<baoli(arr, n, r, l)<<endl;
	}
	system("pause");
	return 0;
}